#ifndef MAIN_H
#define MAIN_H

/*! @file main.h
@mainpage Kubické splajny aneb Výhody C++ proti čistému C v bare-metal.

 Na jednoduchých příkladech se zde pokusím ukázat, že použít jazyk C++ může
 být o něco efektivnější než psát to v čistém C. Většina "vychytávek" pochází
 až z moderního rozšíření C++11, použity jsou i konstrukce C++14. Kód bude
 kompletní příklad pro architekturu STM32F051, sice nedělá nic užitečného,
 ale měl by alespoň fungovat. No nic užitečného. Je to celkem kompletní příklad
 jak aproximovat nelinearitu K termočlánku (nebo jiné věci) kubickými splajny,
 využít by se to dalo, ale jak dále poznamenávám, trojčlenku zná každý,
 inverzi pásové matice dokáže málokdo, i když pokud tohle máme hotové, pak proti
 lineární aproximaci přibudou v jednom výpočtu jen 2x násobení a 2x součet, takže nic moc navíc.
 
 Samotného mě překvapilo, co všechno z C++ a co není v čistém C obsaženo lze v takto
 krátkém příkladu využít. Určitě by se ještě něco našlo, časem sem možná ještě něco
 přidám, ale kromě tohoto zde ještě z kontextu vyplynulo, že gcc toolchain, používaný
 většinou bare-metal komunity není to jediné, co lze z GNU překladačů použít.
 Kdyby někdo hodně chtěl vyzdvihnout přednosti překladače clang, jen těžko by hledal
 vhodnější příklad. Velikost agresívně optimalizovaného kódu je pro Cortex-M0 tohoto
 projektu následující
@code
size clang version 10.0.0 -Oz :
   text	   data	    bss	    dec	    hex	filename
   4164	      4	    588	   4756	   1294	example.elf
size arm-none-eabi-gcc version 9.2.1 -Os :
   text	   data	    bss	    dec	    hex	filename
  11304	     44	    848	  12196	   2fa4	example.elf
@endcode
 Takže pokud jste si mysleli, stejně jako já, že gcc produkuje efektivnější kód než clang,
 vězte, že tomu tak vždy být nemusí. Přiznávám, že to ale byl tak trochu úmysl.
 Nicméně, celý ten clang toolchain začíná dávat smysl, funguje i ld.lld, jen je trochu
 problém s knihovnami, ale lepší se to a doprovodné nástroje (scan-build) se docela
 hodí i pro gcc.

 Kromě cílového procesoru STM32F051 to lze přeložit i jako nativní kód, zdrojáky
 kde je nějaký rozdíl jsou v odlišných adresářích. Je to sice o dost víc práce, ale zapatlávat
 to celé těmi ifdef, ve kterých se nakonec nikdo nevyzná se mi opravdu nechtělo.

 <b>Tento text není a nebude učebnice jazyka C++. Je to jen pár neúplných poznámek o jeho využití v bare-metal.</b>
 
@section secContent Obsah.
 
  -# @ref secTypeControl
  -# @ref secCPPmain
  -# @ref secNameSpaces
  -# @ref secConstructDestruct
  -# @ref secReferences
  -# @ref secVirtualMethods
  -# @ref secOverloading
  -# @ref secTemplates
  -# @ref secConstexpr
  -# @ref secLambdaExpr
  -# @ref secDecorators
     -# @ref subDecorators1
     -# @ref subDecorators2
     -# @ref subDecorators3
     -# @ref subDecorators4
     -# @ref subDecorators5
     -# @ref subDecorators6
     -# @ref subDecorators7
     -# @ref subDecorators8
     -# @ref subDecorators9
  -# @ref secEndOfText
          
@section secTypeControl Typová kontrola.
     Lepší než v C, eliminuje některé chyby, ale není úplně striktní jako je tomu třeba v jazyce rust.
     I zde probíhají automatické konverze ze signed na unsigned (a naopak), což může být zdroj chyb.
     Dále je potenciálně nebezpečné zúžení celočíselného typu - viz. havárie rakety Ariane 5. Překladač
     na to obvykle upozorní, ale i zde je potřeba být velmi obezřetný. Stejně jako v čistém C je dobré
     používat celočíselné typy s definovanou šířkou z hlavičky stdint.h. Explicitní přetypování funguje
     se stejnou syntaxí jako v čistém C, je však lepší používat static_cast, const_cast, reinterpret_cast.
     Pak je na první pohled patrné, že programátor snad ví, co dělá, dá se to lépe dohledat.
     
     Jde to dotáhnout o něco dále, zapouzdřit si vhodný celočíselný typ do extra třídy (nazvěme jí např. @ref FIX::real),
     vytvořit si potřebné konstruktory, přetížit všechny potřebné operátory (ale je jich fakt moc) a případná
     přetečení ošetřit přímo na místě. Eliminují se tak automatické konverze. Oni to takhle měli patrně u té Ariane 5
     uděláno, ale pro větší efektivitu kontroly prostě vypnuli. Programování bývá o kompromisu, ale nesmí se to přehánět.
     
     S touto problematikou souvisí i používání statických inline (příp. constexpr) funkcí (výrazů) místo C-čkových maker.
     Je to typově bezpečnější a moderní překladače si s tím poradí, aniž by generovaly nějaký kód navíc.
     
     Takže když vidíte v popise periferií toto
     @snippet stm32f051/STM32F0x1.h ReplaceMacroExamle
     neděste se toho. To, že je místo hvězdičky ampersand značí jen, že místo ukazetele používám odkaz (@ref secReferences).
     Lépe se to pak píše a není to nic proti ničemu. V C-čku se na tohle používaly makra i když by šly
     také použít statické konstanty, ale zřejmě to je jen síla zvyku.
     <i>Pokud je vám divné, že je tam něco jako USART1_Type nebo I2C1_Type, když by to šlo i bez té jedničky,
     je to tak proto, že jak je hlavička <a href="https://github.com/Kizarm/svdview/tree/master/cmsis_beta" target="_blank">generována</a>
     ze <a href="https://www.st.com/resource/en/svd/stm32f0_svd.zip">SVD</a> souboru, probíhá zároveň kontrola, zda jsou u periferie
     stejného typu stejné registry a v nich stejné i bity. Pokud tomu tak je, pak je teprve periferie považována
     za odvozenou a přejmenována podle původní. A nebyla už síla to nakonec umravnit. Problém byl v tom, že
     ST používalo timery stejného typu i když v některých chybí mnohé bity. To mi zkrátka vadilo.</i>
     
@section secCPPmain Zapouzdření.
     Je nejdůležitějším rysem jazyka C++. Tato myšlenka (spolu se jmennými prostory) umožnila trochu
     umravnit velké projekty, je šikovné mít pohromadě data i funkce, které s nimi manipulují. Ten János Neumann,
     známý jako John von Neumann (ano původem Maďar) byl hodně chytrý člověk, kromě počítačů dal kompletně dohromady
     i základy kvantové mechaniky. Nebudu to příliš rozebírat, v kódu je zapouzdřeno do tříd nebo struktur vše,
     co má jen trochu smysl. Opět - negeneruje to žádný kód navíc.
     
     Kromě přehlednosti to umožňuje i snadnější přenositelnost - zdrojový kód lze jednoduše přenést do jiného projektu,
     v zásadě není nutné v tom dělat nějaké úpravy. Sice se výkonný kód dostává do hlavičkových souborů,
     což je v čistém C považováno za nežádoucí, ale na druhou stranu metody definované už v hlavičce jsou
     automaticky inline, kód se tak o něco zrychlí.
     
@section secNameSpaces Jmenné prostory.
     V takto malém projektu je poměrně těžké najít smysluplné využití. Tady se pomocí jmenných prostorů pokusím trochu
     suplovat preprocesor. Výpočty byly původně napsány obecně pro aritmetický typ real. Co tento typ představuje
     je dodatečně definováno v hlavičkách real_fix.h a real_flt.h a prostým include jedné z nich se dalo
     vybrat, zda to bude řešeno v pevné nebo pohyblivé řádové čárce. V C++ lze celý obsah hlavičky obalit
     jmenným prostorem a vložit je do zdrojáků obě. Zůstane jediný bod ve kterém je možné udělat výběr :
     @snippet common/print.h NameSpaceExample
     Jasně, nic moc to nepřináší, ale funguje to. Jmenné prostory oceníme v knihovnách a rozsáhlých projektech,
     tady je to opravdu zbytečné, něco jsem sem dát musel, protože jmenné prostory v čistém C nejsou a
     tohle má alespoň nějaký smysl. A takto se to normálně nepoužívá.

@section secConstructDestruct Konstruktory a destruktory.
     Patří k zapouzdření tak nějak přirozeně. V čistém C docházelo k neočekávaným chybám tím, že programátor
     prostě někde zapomněl inicializovat nějakou proměnnou. Prostě očekával, že v paměti je nula a ona tam
     z nějakého důvodu nebyla. To je typické pro zásobník - v něm zůstává vždy nějaký obsah z předchozí činnosti.
     Právě tohle by měl řešit konstruktor.
     
     Další problém byl při alokaci paměti na haldě. V čistém C, pokud je projekt trochu složitější je dost velký
     problém uhlídat, jestli je alokovaná paměť uvolňována vždy a ve správný okamžik (otázka vlastnictví objektu a jeho doby života).
     Konstruktory a destruktory tohle řeší sice jen částečně - pokus o definitivní řešení přišel až s jazyky jako je java, python atd.,
     kde se používá tzv. garbage collector (neplést s uklízením nepotřebých sekcí při linkování), ale to přináší jen další
     problémy - ale v bare-metal se s tím nemá cenu moc zabývat.
     Alokace na haldě v bare-metal nemá příliš velké využití (alespoň já se snažím tomu vyhnout jak čert kříží),
     na druhou stranu v čistém C zase nikdo moc nevytváří složitější datové struktury lokálně. Původně to ani moc nešlo,
     nějak se to divně obchází funkcí alloca(), modernější C-čko už umí alokovat pole na zásobníku podobně jako C++.
     Je to k diskusi, ale pokud  máme RAM opravdu málo, tak se s tím prostě moc dělat nedá. Jediné co jde, je použít stejný
     úsek paměti v různý čas. Zásobník je na to stejně dobrý jako halda, ale někdy to prostě nejde nebo se tím problém hodně zesložití.
     Halda je dobrá, pokud vytváříme objekt, jehož velikost závisí na příchozích datech. To nebývá často a přináší to
     problémy s fragmentací a nedeterministickým časem přístupu. To samozřejmě není problém jazyka, ale bare-metal jako takového.
     Halda je relevantní v problémech hromadného zpracování dat, databází a pod., zde většinou pracujeme v reálném čase,
     kdy je spíš potřeba okamžité reakce na nějakou změnu vstupu a objemy zpracovávaných dat nejsou velké.
     
     Co je trochu problém v bare-metal to jsou konstruktory statických tříd. Naštěstí je překladač umísťuje na zcela určité
     místo, takže pak stačí (ještě před voláním main()) udělat něco jako
     @snippet stm32f051/startup.c InitStaticConstructors
     Vypadá to dost šíleně, ale funguje to a bez toho to opravdu nejde. 
     
     <i>Inicializace periferií v (noexcept) konstruktoru ?
     Je to též otázka k diskusi, já to takto používám a funguje to. Dokonce lze periferii v destruktoru přes RCC zresetovat
     a odstavit. To se hodí pro nějaké sdílené funkce nebo v low power režimech.</i>
     
@section secReferences Reference.
     Neboli odkazy jsou také něco, co není v čistém C a je to dost užitečné. A není to jen takový "lepší" zápis ukazatele.
     Začátečníka v C++ to může mást, lze si na to však zvyknout a používání se vyplatí. Překladač si
     tak nějak hlídá aby nebylo možné vytvářet reference na objekt, který neexistuje (skončila mu doba života),
     na rozdíl od ukazatelů, kde je pak možné přes (nenulový) ukazatel například volat metodu objektu, který je už dávno
     mimo paměť. Což zamozřejmě skončí fatální chybou. Bez referencí by se neobešly kopírovací konstruktory.
     Ale nechtěl bych to rozebírat do detailů, kterým stejně úplně nerozumím, přečtěte si Bruce Eckela, stačí
     si zapamatovat, že se s tím líp pracuje a také to o něco lépe funguje. Je to prostě něco jako konstantní ukazatel,
     který se automaticky dereferencuje. Kód tím také nijak neroste. A možná je to na pochopení lepší než ty ukazatele.
     Údajně to pochází z jazyka Algol nebo Pascal. Používám to v programech často a zdá se, že to spokojeně funguje.
     
@section secVirtualMethods Virtuální metody.
     Umožňují vytvářet programová rozhraní bez zásahu do původního kódu. V čistém C se používají callback funkce,
     virtuální metody jsou o něco přehlednější, ale pro někoho příliš abstraktní. Dost špatně se to vysvětluje, ale
     zkusme to. Mějme protokolový stack a představme si, že hardware je jaksi "naspodu", je to třída Usart a
     její instance usart. Nad ní je jediná další vrstva, třída Print, resp. její instance console. Obě tyto
     třídy dědí z třídy BaseLayer a pro jednoduchost si představme, že data jsou vytvářena (výpočtem) v hlavní smyčce programu
     třídou Print, resp. její metodou BlockDown, všechno co je potřeba lze celkem snadno do ní svést.
     
     První co uděláme, je spojení instancí jmenovaných tříd
     @snippet main.cpp ConnectionStack
     funguje to pak takto
     @snippet common/baselayer.h StackChainExample
     potřebujeme dávat data "dolů", takže budeme využívat jen metodu Down() bázové třídy BaseLayer
     @snippet common/baselayer.h DownMethodPrototype
     z toho by mělo už být vidět, že nahoře, tedy ve třídě Print metodu Down() ani přetěžovat nemusíme, stačí jí jen zavolat
     @snippet common/print.cpp BlockExample
     co přetížit musíme je Down() ve spodní vrstvě Usart
     @snippet stm32f051/usart.cpp VirtualMethodBottom
     kde jak je vidět cpeme jen příchozí data do fronty (FIFO) tx_ring (proto vlastně metody Up() i Down() nemohou být konstantní).
     Jak se data v přerušení z fronty vybírají a jak udělat frontu atomicky, tím se tu zaobírat nebudu.
     
     Z toho celého povídání se zdá, že pro čistého C-čkaře to musí být na blázinec, ale lze si na to zvyknout, opravdu na
     tom nic není, tohle jednou napíšete a pak to jen používáte. A když to takhle vyzobu ze zdrojáků aby se to důležité
     vešlo na jednu obrazovku, je vidět, že je to opravdu jen pár velmi jednoduchých funkcí, bohužel jsou však
     dost složitě provázány a dohledávat to ve zdrojácích není snadné. V C-čku by to šlo napsat jednodušeji tak, že by
     se to dalo úplně všechno do jedné funkce - callbacku, hodně by tím však utrpěla možnost znovupoužití tohoto kódu.
     Opět není generován žádný zbytečný kód navíc, uvádí se, že pokud takto používáme dědičnost a virtuální metody,
     překladač vyneruje navíc tabulku VTABLE, ale pokud jsou metody takhle jednoduché a definované přímo v hlavičce,
     jsou inline a nepřekáží. Možná tam nějaká tabulka VTABLE bude, možná nebude, protože překladač v takto jednoduchém
     případě dynamickou vazbu nepotřebuje, celá problematika do všech detailů jak to
     přesně funguje je složitá, ale celkem není potřeba tomu rozumět až na dřeň. Stejně je to tak se vším,
     málokdo chápe matematický aparát kvantové elektrodynamiky do té míry aby dokázal posoudit zda symetrie
     U1(loc) opravdu generuje zákon zachování elektrického náboje, ale učíme se už na střední škole, že to tak
     je a není důvod tomu nevěřit. A že je Země kulatá, je též jen otázka víry.
     
     Co by bylo trochu problematické je chod dat v opačném směru, příjem dat Usartem. Metoda Up() by se pak volala
     v přerušení a v něm by pak probíhala celá obsluha protokolového stacku. Ne, že by to nešlo, já mám mnoho prográmků, kdy
     se celá práce děje v přerušení, v main smyčce se jen uspává jádro, ale tam se většinou používá DMA.
     Prostě musí se nad tím trochu přemýšlet.
     
     Nakonec je třeba se krátce zmínit o abstraktních bázových třídách. V projektu to použito není a udělat na
     to jednoduchý a přehledný příklad prostě nejde. Pokud napíšeme něco jako
     @snippet unix/ledblinkingtest.cpp AbstactInterfaceExample
     máme abstraktní bázovou třídu (strukturu AbstactInterface, je to jedno). Zde obsahuje jen jedinou metodu Send(),
     důležité je to = 0 na konci. To značí čistou virtuální metodu (pure virtual) a pokud třída obsahuje jen
     jedinou takovou metodu, je překladačem považována za abstraktní a nemůžeme pak vytvořit její instanci.
     Pokud takovou třídu zdědíme, pak musíme čistě abstraktní metodu přetížit, tj. vytvořit její tělo.
     V čistém C je to něco jako callback funkce - tady lze zapomenout tento callback nastavit, což pak končí
     chybou. V C++ to nejde, překladač nás s tím vyhodí. Je to hodně zjednodušeně řečeno, ale podrobnosti nejsou
     zase tak podstatné. Opět bych odkázal na Eckela, jeho dvojdílná bichle "Myslíme v jazyce C++" je
     dostatečně podrobná, aby každého přešla chuť se C++ naučit.
     
@section secOverloading Přetěžování funkcí, operátory.
     Užitečné, hlavně pro rekurzívní volání. V čistém C nemůžou mít funkce stejná jména i když mají jiné parametry.
     V C++ to možné je, překladač si ta jména interně "zmrší" (mangle) právě podle těchto parametrů. No a protože
     operátor je jen odlišná syntaxe pro funkci, funguje to i pro operátory, kde se to používá snad nejvíc.
     
     Příklad.
     @snippet common/print.h OperatorOverloadExample
     Operátor << je snad nejčastěji přetěžovaný, naznačuje něco jako "výstup", ale v těchto zdrojácích se běžně
     přetěžují i ostatní operátory - třeba pro aritmetické operace. Třída real tedy může simulovat aritmetiku
     v pevné řádové čárce nebo může fungovat jako běžné float číslo. Za zmínku stojí, že operátory běžně vracejí
     odkaz na třídu (resp. instanci), ze které jsou volány (this), což umožňuje jejich řetězení (to je při zápisu
     aritmetických výrazů běžné).
     
@section secTemplates Šablony a STL.
     Také dost usnadní práci, nemusí se přepisovat kód pro každou blbost, v C samozřejmě nic takového není.
     Tady je typický příklad třída FIFO (dbus_w_t je nějaký celočíselný typ, který daná architektura umí uložit atomicky)
     @snippet common/fifo.h TemplateExampleDef
     která má 2 parametry - typ T ukládaného objektu a M (implicitně 64) celé číslo udávající počet ukládaných prvků.
     Tak je možné vytvářet instance staticky, není potřeba používat haldu. Za zmínku stojí konstruktor
     @snippet common/fifo.h TemplateExampleConstr
     a v něm static_assert(). Výraz ve static_assert() musí být constexpr, je to kontrola za překladu.
     To také v C nejde. Při překladu to kontroluje, zda M není blbost a vcelku zadarmo.
     Atomičnost operací zde rozebírat nebudu, ale když už jsme u šablon nelze nezmínit STL, čili Standard Template Library.
     Ta není moc použitelná v bare-metal, prvky jako std::string, std::vector jsou nenažrané a používají haldu,
     ale třeba std::atomic na Cortex-M3/4 lze použít s výhodou, používají instrukce LDREX, STREX, takže nezastavují
     přerušení procesoru jak je to běžné třeba na AVR. Celé to prozkoumané nemám, ale jde použít např. std::sort()
     na druhou stranu třídit něco v tak malé RAM lze i jednodušeji.
     
     <i>V C by snad šlo použít makra ?</i>
     
@section secConstexpr Constexpr výrazy.
     Co jde spočítat při překladu, to spočítej a výsledek dosaď do výsledného kódu.  Zatím to umí dobře clang
     (zřejmě kvůli LLVM struktuře), lze i velmi složité  analytické funkce, dokonce tabulky do flash.
     Pro ARM je hezkou  ukázkou výpočet koeficientů kubických splajnů, kde clang dá podstatně menší kód
     než gcc (o několik KiB). Je to jen tím, že gcc ten výpočet ponechá ve flash, počítá to za běhu, nikoli už při překladu.
     @snippet common/spline.h CubicSplinesComputeCoefficients
     to je fakt už vyšší dívčí, celé je to v double kvůli přesnosti, počítá se inverze pásové matice
     protože aproximační polynomy na sebe nejen musí spojitě navazovat, ale výsledná funkce musí být i hladká.
     Tohle samozřejmě nikdo nepoužívá, je to tak složité, že pokud to někdo použít musí, tak si to předpočítá
     externí knihovnou (python je na to velmi dobrý, má knihovny na všechny možné interpolační funkce).
     Normální člověk použije lineární interpolaci, stačí mu na to obyčejná trojčlenka. Sice musí mít pro požadovanou
     přesnost řádově větší tabulku koeficientů, ale většinou to nevadí.
     
     Celkem to není nic nového, i v čistém C, pokud použijeme trochu agresívnější optimalizaci, jednoduché
     funkce jejichž argumentem je číslo jako literál většinou vyprodukují při překladu rovnou výsledek. Tady
     je to jen dotaženo jen o něco dál. Obecně je dobré označit <b>úplně</b> všechno, co takto označit jen trochu
     jde jako const. Jednak to usnadní život překladači a pak pokud překladač někde vyhodí chybu, je jasně
     vidět, že jsme něco nedomysleli. Udržet v hlavě všechny vazby, které drží překladač je takřka nemožné.
     
@section secLambdaExpr Lambda výrazy.
     Výhodou je, že to umí posbírat data z okolního kontextu a není tedy potřeba předávat
     tolik parametrů. V bare-metal jsem to použil pro nastavování jednotlivých bitů
     v bitovém poli metodou read-modify-write, je to přehledné a nepřináší to žádnou
     režii navíc. Ale jde to poměrně slušně udělat i v čistém C, je to jen o něco víc práce.
     
     Příklad.
     @snippet stm32f051/usart.cpp LambdaExampleUsage
     a jak je to definováno (úplně na konci)
     @snippet stm32f051/STM32F0x1.h LambdaExampleDef
     Je dobré si všimnout, že je to šablona, takže takto generovaná hlavička pro popis periferií
     je v čistém C nepoužitelná. Šlo by to obejít (např. F jako ukazatel na funkci), ale ukázalo
     se, že je s tím víc komplikací než užitku, takže to zde zůstalo jako obecný "callable" objekt,
     což může být i třída s přetíženým operátorem (). Ani tahle konstrukce nemá žádný overhead proti
     tomu jak by to šlo napsat v čistém C. Toto  bylo zvoleno záměrně - prvky pole jsou široké 5 bitů,
     takže by bylo dobré je vynulovat pomocí masky a pak teprve nastavit potřebné bity. Upřímně řečeno,
     používání bitových polí a unionů není úplně správně, přímočarý zápis v C jako read-modify-write
     celého "slova" je čistší, ale mně se osobně nelíbí. Je to dost guláš. Ale bitová pole závisí
     na endianitě a union může být závislý na překladači, takže je to vlastně hodně špatně.
     Nikdy jsem však nenarazil na problém. Endianita procesoru je předem známa a jak gcc tak clang
     se chovají vůči unionu poměrně slušně a předvídatelně.
     
     Dovolím si malou poznámku k typu ONE_BIT. Je to výčet
     @snippet stm32f051/STM32F0x1.h EnumerationExamleDef
     stejně jako v C. Jde tam tedy přiřadit pouze hodnoty SET nebo RESET. Pokud by zde bylo místo
     ONE_BIT uint32_t, nic špatného by se nestalo, ale šly by nastavit i hodnoty 0u nebo 1u.
     Takhle to kvůli typové kontrole nejde a je to tak dobře. ST výčty v SVD popise (asi z lenosti)
     moc nepoužívá a je to škoda. Je možné si něco dodatečně definovat jako třeba
     @snippet stm32f051/system.cpp EnumExampleSW_EN_Def
     a pak použít
     @snippet stm32f051/system.cpp EnumExampleSW_EN_Use
     I když je RCC.CFGR.B.SWS typu uint32_t, není problém. V C++ lze definovat pro výčet i jeho typ,
     zde to není použito, protože v gcc mám zatím neopravený bug, který otravuje s pochybnými
     warningy, a ty nejdou vypnout. Je těžké říct jestli je to chyba nebo vlastnost.
     Nicméně používání výčtů je velmi užitečné, dost to omezí možnost přiřadit do proměnné úplnou blbost.
     
@section secDecorators Ostatní dekorace.
  @subsection subDecorators1 Raw String Literal
     velmi užitečné, v čistém C není (zřejmě pochází z pythonu).
     
        Příklad.
        @snippet main.cpp LoremIpsumExample
        Fakticky se tohle dělalo podobně v čistém C pomocí assembleru a jeho direktivy .incbin "file.txt".
        Ale tohle se dá s výhodou použít naopak pro assembler vestavěný v C++ - asm (R"---(text)---");.
        Blok je pak daleko přehlednější, nemusí v něm být ty podivné escape sekvence.

  @subsection subDecorators2 User-defined Literals
     hodně divná věc, dají se s tím dělat celkem kouzla jako zapisovat čísla v libovolné číselné soustavě atd.
  
        Příklad.
        @snippet stm32f051/ledblinkingtest.cpp UserDefinedLiteralExamle
        Ukazuje jak převést sekundy na milisekundy, je to pitomost, ale podobně lze zapisovat třeba
        úhlové stupně v radiánech (a naopak). To se celkem hodí, je však nutné dodržet správný typ
        parametru - většinou to bývá nějaký dlouhý typ.
        
        Kromě toho je v tomto příkladu ukázáno použití defaultního parametru, což se v kódu vyskytuje
        poměrně často, v čistém C toto není možné. Bohužel to v C++ není dotaženo do takové dokonalosti jako
        třeba v pythonu, je nutné být obezřetný.

  @subsection subDecorators3 Range-based for
     proměnný počet parametrů, přetížené funkce print, jmenné prostory
        
        Příklad - definice důležitých proměnných
        @snippet main.cpp VarArgExampleDef
        a pak to použijeme např. takto
        @snippet main.cpp VarArgExample
        funkce print jsou obaleny (naprosto zbytečně) jmenným prostorem fmt, jde to, chleba to nežere.
        Je to něco jako C-čkové printf(), výpisy jdou do console, proměnný počet argumentů je dělán
        jako šablona, postupné užití parametru je realizováno rekurzí. Typ parametru je při překladu znám,
        takže není nutné předepisovat typ ve formátovacím řetězci. A protože mě nezajímá ani délka
        výstupu (pro daný typ), stačí jen naznačit znakem procento, že se má sežrat další parametr.
        Ten přístup je proti C-čku prostě úplně jiný. Asi se tím nic neušetří, vypadá to blbě, rekurze
        žere zásobník (není úplně na ocase), zřejmě by to chtělo ještě jedno přetížení print(const char * fmt, const First & first),
        ale i tak to funguje a překladač nenadává. Je to prostě ukázka, že to jde.
        
        Range-based for je lepší vychytávka, kterou v C nenajdete, ale v novějších jazycích je běžná.
        Je to určeno pro procházení pole dat aniž by bylo nutné používat nějaký index. Ale co si budeme povídat,
        většinou je stejně nějaký index potřeba. A pokud to opravdu chceme používat ve svých třídách,
        je k tomu potřeba ještě dodefinovat iterátory begin a end
        @snippet common/spline.h IteratorExampleDef
        což sice není žádná věda, ale zdržuje to.
        
  @subsection subDecorators4 Static_assert
     v textu @ref secTemplates
  @subsection subDecorators5 Automaticky odvozené typy
     z C++14, v textu např. @ref secLambdaExpr Typ auto má v C jiný význam. Já to sice používám,
     ale jen z lenosti, protože u jazyka s typovou kontrolou má být typ zřejmý.
  @subsection subDecorators6 Defaultní parametry
     v textu @ref subDecorators2
  @subsection subDecorators7 Odlišná syntaxe logických operátorů
     @snippet common/real_fix.h ReplaceLogOperators
     operátory || lze zapsat jako or, && jako and, ! jako not, údajně se to lépe píše. Jsou to pak klíčová slova jazyka.
  @subsection subDecorators8 Typ výčtu
     viz @ref secLambdaExpr, ale nepoužívám, stejně jako enum class, důvod je tam uveden.
  @subsection subDecorators9 Proměnný počet parametrů
     viz @ref subDecorators3
        
@section secEndOfText Závěr.
  To je zatím vše. Mělo by to mít nějakou licenci, ale jako obvykle napíšu - dělejte si s tím co chcete,
  ale neobtěžujte mě s tím, že to nefunguje (nejblíž je asi MIT). Jsou to poznatky nasbírané za několik
  let ne příliš usilovného snažení, takže hodně neúplné, určitě jsou v tom chyby. Nástroj scan-build
  sice žádnou neodhalil, to však ještě nic neznamená.

*/
#include "ledblinkingtest.h"
#include "usart.h"
#include "print.h"    // pořadí je zde důležité, nebo by se musely hlavičky přeuspořádat
#include "spline.h"   // TODO: spline používá cosi z print.h
#endif // MAIN_H
