#ifndef SPLINE_H
#define SPLINE_H
/** @file
 *  @class SPLINE
 *  @brief Kubické splajny.
 * 
 * Pro výpočet koeficientů interpolate kubickými splajny se používá většinou externí knihovna.
 * Ne, že by výpočet byl nějak extrémně složitý, ale podmínka hladkosti napojení vede na
 * soustavu lineárních rovnic stejného řádu jako je počet měření. Je to jen poněkud nepřehledné.
 * Clang umí provést výpočty v konstruktoru SPLINE za překladu a výsledek uložit do sekce .rodata,
 * kód je tedy velmi dobře optimalizován - ušetří se tím asi 3 KiB kódu.
 * 
 * Lze to počítat i v pevné řádové čárce, v celočíselné aritmetice, ale není to moc přesné a
 * vyžaduje 32x32=64 bit násobení, které snadno přeteče. Záměnou x za y v konstruktoru SPLINE
 * lze snadno vyrobit reverzní funkci.
 */
typedef __SIZE_TYPE__ size_t;
static constexpr real to_real (const double x) {
  return real (x);
}
// Zjištění počtu prvků statického pole.
template<class T, size_t N>constexpr size_t array_size (T (&) [N]) { return N; }
/*!
 * @class Pair
 * @brief Prvek vstupní tabulky pro výpočet kubických splajnů.
 * */
struct Pair {
  int x, y;
};
/*! @class SplineSet
    @brief Výsledné koeficienty pro výpočet iterace pomocí polynomu 3. řádu.
*/
struct SplineSet {
  real x;   //!< začátky intervalů x
  real a;   //!< záčátky intervalů y, koeficienty a
  real b;   //!< koeficienty b (x^1)
  real c;   //!< koeficienty c (x^2)
  real d;   //!< koeficienty d (x^3)
};
//! V podstatě statický vektor pro SplineSet (bez nutnosti dymanické alokace)
template<const int N> class SPLINE {
  SplineSet data [N - 1];   // zde jsou schovány koeficienty (privátně)
  public:
//! [CubicSplinesComputeCoefficients]
    explicit constexpr SPLINE (const Pair * const p, const bool reverse = false) noexcept {
      double x [N], y [N];  // přeskupení dat - možnost inverzní funkce při reverse = true
      if (reverse) {for (int i=0; i<N; i++) { x[i] = p[i].y; y[i] = p[i].x; }}
      else         {for (int i=0; i<N; i++) { x[i] = p[i].x; y[i] = p[i].y; }}      
      /* Tenhle příšerně složitý konstruktor je převzat ze stackoverflow.com (původní odkaz už zmizel)
       * Není to zas taková sranda - koeficienty se počítají řešením tridiagonální matice řádu N.
       * V těch indexech se snadno zabloudí, tohle kupodivu funguje (přirozené splajny) ač je to dost krátké.
       * Je zajímavé, že tohle najdete spíš ve Fortranu než v C, matematici jsou zřejmě hodně konzervativní.
       * */
      const int n = N - 1;
      double h [n];
      for (int i = 0; i < n; ++i) { h[i] = x[i+1]-x[i]; }
      double alpha [n]; alpha [0] = 0.0;
      for (int i = 1; i < n; ++i) {
        alpha[i] = 3.0 * (y[i+1] - y[i]) / h[i] - 3.0 * (y[i] - y[i-1]) / h[i-1];
      }
      double c [n+1], l [n+1], mu [n+1], z [n+1]; l [0] = 1.0;  mu[0] = 0.0;  z [0] = 0.0;
      for (int i = 1; i < n; ++i) {     // přímý chod
        l [i] = 2.0 * (x[i+1] - x[i-1]) - h[i-1] * mu[i-1];
        mu[i] = h[i] / l[i];
        z [i] = (alpha[i] - h[i-1] * z[i-1]) / l[i];
      }
      l[n] = 1.0;  z[n] = 0.0;  c[n] = 0.0;
      double b [n], d [n];
      for (int j = n-1; j >= 0; --j) {  // zpětný chod
        c[j] = z [j] - mu[j] * c[j+1];
        b[j] = (y[j+1] - y[j]) / h[j] - h[j] * (c[j+1] + 2*c[j]) / 3.0;
        d[j] = (c[j+1] - c[j]) / (3.0 * h[j]);
      }
      for (int i = 0; i < n; ++i) {     // závěrečný zápis koeficientů
        data[i].x = to_real(x[i]);   data[i].a = to_real(y[i]);
        data[i].b = to_real(b[i]);   data[i].c = to_real(c[i]); data[i].d = to_real(d[i]);
      }
    }
//! [CubicSplinesComputeCoefficients]
    const SplineSet & operator[] (const int index) const {
      return data [index];
    }
    const size_t size () const {
      return N - 1;
    }
    const real interpolate (const real x) const {
      const unsigned    n = range (x);                     // určíme interval ve kterém budeme počítat
      const SplineSet & s = data [n];                      // koeficienty polynomu v tomto intervalu
      const real        r = x - s.x;                       // souřadnice x v tomto intervalu
      return cubic_poly (s, r);                            // vlastní výpočet
    }
    /***************************************************************/
    /** @class iterator
     *  @brief pro range-based for () */
//! [IteratorExampleDef]
    class iterator {
      const SplineSet * ptr;
      public:
        iterator(const SplineSet * _ptr) : ptr (_ptr) {}
        iterator  operator++ ()                             { ++ptr;   return * this;    }
        bool      operator!= (const iterator & other) const { return   ptr != other.ptr; }
        const SplineSet & operator*  ()               const { return * ptr;              }
    };
    iterator begin () const { return iterator (data        ); }
    iterator end   () const { return iterator (data + N - 1); }
//! [IteratorExampleDef]
  protected:
    const unsigned range (const real x) const {
      int l=0, r=size() - 1u;
      while (l <= r) {
        const int s = (l + r) >> 1;
        const real x0 = data[s + 0].x;
        const real x1 = data[s + 1].x;
        if      (x <  x0) r = s - 1;
        else if (x >= x1) l = s + 1;
        else return s;
      }
      return size() - 1u;
    }
    const real cubic_poly (const SplineSet & s, const real x) const {
      return ((s.d * x + s.c) * x + s.b) * x + s.a;
    }
};

#endif // SPLINE_H
