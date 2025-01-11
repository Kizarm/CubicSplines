#include "system.h"
typedef __SIZE_TYPE__ size_t;
extern "C" {
  [[using gnu: naked,nothrow,used]] extern void handle_reset ();
  [[gnu::used]] extern void user_init ();
  [[gnu::used]] extern int  main      ();
  // This is required to allow pure virtual functions to be defined.
  extern void __cxa_pure_virtual() { while (1); }

  // These magic symbols are provided by the linker.
  extern uint32_t _sbss;
  extern uint32_t _ebss;
  extern uint32_t _data_lma;
  extern uint32_t _data_vma;
  extern uint32_t _edata;

  [[gnu::weak]] extern void (*__preinit_array_start[]) (void);
  [[gnu::weak]] extern void (*__preinit_array_end[]) (void);
  [[gnu::weak]] extern void (*__init_array_start[]) (void);
  [[gnu::weak]] extern void (*__init_array_end[]) (void);

  // If you don't override a specific handler, it will just spin forever.
  [[gnu::interrupt]] void DefaultIRQHandler( void ) {
      // Infinite Loop
      for (;;);
  }
  [[gnu::interrupt]] void NMI_RCC_CSS_IRQHandler( void ) {
      RCC.INTR.B.CSSC = RESET;	// clear the clock security int flag
  }
  #define ALIAS(f) __attribute__((nothrow,weak,alias(#f),used))
  void Ecall_M_Mode_Handler( void )        ALIAS(DefaultIRQHandler);
  void Ecall_U_Mode_Handler( void )        ALIAS(DefaultIRQHandler);
  void Break_Point_Handler( void )         ALIAS(DefaultIRQHandler);

  void NMI_Handler( void )                 ALIAS(NMI_RCC_CSS_IRQHandler);
  void HardFault_Handler( void )           ALIAS(DefaultIRQHandler);
  void SysTick_Handler( void )             ALIAS(DefaultIRQHandler);
  void SW_Handler( void )                  ALIAS(DefaultIRQHandler);
  
  void WWDG_IRQHandler             (void) ALIAS(DefaultIRQHandler);
  void PVD_IRQHandler              (void) ALIAS(DefaultIRQHandler);
  void TAMPER_IRQHandler           (void) ALIAS(DefaultIRQHandler);
  void RTC_IRQHandler              (void) ALIAS(DefaultIRQHandler);
  void FLASH_IRQHandler            (void) ALIAS(DefaultIRQHandler);
  void RCC_IRQHandler              (void) ALIAS(DefaultIRQHandler);
  void EXTI0_IRQHandler            (void) ALIAS(DefaultIRQHandler);
  void EXTI1_IRQHandler            (void) ALIAS(DefaultIRQHandler);
  void EXTI2_IRQHandler            (void) ALIAS(DefaultIRQHandler);
  void EXTI3_IRQHandler            (void) ALIAS(DefaultIRQHandler);
  void EXTI4_IRQHandler            (void) ALIAS(DefaultIRQHandler);
  void DMA1_Channel1_IRQHandler    (void) ALIAS(DefaultIRQHandler);
  void DMA1_Channel2_IRQHandler    (void) ALIAS(DefaultIRQHandler);
  void DMA1_Channel3_IRQHandler    (void) ALIAS(DefaultIRQHandler);
  void DMA1_Channel4_IRQHandler    (void) ALIAS(DefaultIRQHandler);
  void DMA1_Channel5_IRQHandler    (void) ALIAS(DefaultIRQHandler);
  void DMA1_Channel6_IRQHandler    (void) ALIAS(DefaultIRQHandler);
  void DMA1_Channel7_IRQHandler    (void) ALIAS(DefaultIRQHandler);
  void DMA1_Channel8_IRQHandler    (void) ALIAS(DefaultIRQHandler);
  void ADC1_2_IRQHandler           (void) ALIAS(DefaultIRQHandler);
  void USB_HP_CAN1_TX_IRQHandler   (void) ALIAS(DefaultIRQHandler);
  void USB_LP_CAN1_RX0_IRQHandler  (void) ALIAS(DefaultIRQHandler);
  void CAN1_RX1_IRQHandler         (void) ALIAS(DefaultIRQHandler);
  void CAN1_SCE_IRQHandler         (void) ALIAS(DefaultIRQHandler);
  void EXTI9_5_IRQHandler          (void) ALIAS(DefaultIRQHandler);
  void TIM1_BRK_IRQHandler         (void) ALIAS(DefaultIRQHandler);
  void TIM1_UP_IRQHandler          (void) ALIAS(DefaultIRQHandler);
  void TIM1_TRG_COM_IRQHandler     (void) ALIAS(DefaultIRQHandler);
  void TIM1_CC_IRQHandler          (void) ALIAS(DefaultIRQHandler);
  void TIM2_IRQHandler             (void) ALIAS(DefaultIRQHandler);
  void TIM3_IRQHandler             (void) ALIAS(DefaultIRQHandler);
  void TIM4_IRQHandler             (void) ALIAS(DefaultIRQHandler);
  void I2C1_EV_IRQHandler          (void) ALIAS(DefaultIRQHandler);
  void I2C1_ER_IRQHandler          (void) ALIAS(DefaultIRQHandler);
  void I2C2_EV_IRQHandler          (void) ALIAS(DefaultIRQHandler);
  void I2C2_ER_IRQHandler          (void) ALIAS(DefaultIRQHandler);
  void SPI1_IRQHandler             (void) ALIAS(DefaultIRQHandler);
  void SPI2_IRQHandler             (void) ALIAS(DefaultIRQHandler);
  void USART1_IRQHandler           (void) ALIAS(DefaultIRQHandler);
  void USART2_IRQHandler           (void) ALIAS(DefaultIRQHandler);
  void USART3_IRQHandler           (void) ALIAS(DefaultIRQHandler);
  void EXTI15_10_IRQHandler        (void) ALIAS(DefaultIRQHandler);
  void RTCAlarm_IRQHandler         (void) ALIAS(DefaultIRQHandler);
  void USBWakeUp_IRQHandler        (void) ALIAS(DefaultIRQHandler);
  void TIM8_BRK_IRQHandler         (void) ALIAS(DefaultIRQHandler);
  void TIM8_UP__IRQHandler         (void) ALIAS(DefaultIRQHandler);
  void TIM8_TRG_COM_IRQHandler     (void) ALIAS(DefaultIRQHandler);
  void TIM8_CC_IRQHandler          (void) ALIAS(DefaultIRQHandler);
  void TIM5_IRQHandler             (void) ALIAS(DefaultIRQHandler);
  void SPI3_IRQHandler             (void) ALIAS(DefaultIRQHandler);
  void UART4_IRQHandler            (void) ALIAS(DefaultIRQHandler);
  void UART5_IRQHandler            (void) ALIAS(DefaultIRQHandler);
  void ETH_IRQHandler              (void) ALIAS(DefaultIRQHandler);
  void ETH_WKUP_IRQHandler         (void) ALIAS(DefaultIRQHandler);
  void USBFS_IRQHandler            (void) ALIAS(DefaultIRQHandler);
  void USBFSWakeUp_IRQHandler      (void) ALIAS(DefaultIRQHandler);
  void USBHD_IRQHandler            (void) ALIAS(DefaultIRQHandler);
  void UART6_IRQHandler            (void) ALIAS(DefaultIRQHandler);
  void UART7_IRQHandler            (void) ALIAS(DefaultIRQHandler);
  void UART8_IRQHandler            (void) ALIAS(DefaultIRQHandler);
  void TIM9_BRK_IRQHandler         (void) ALIAS(DefaultIRQHandler);
  void TIM9_UP__IRQHandler         (void) ALIAS(DefaultIRQHandler);
  void TIM9_TRG_COM_IRQHandler     (void) ALIAS(DefaultIRQHandler);
  void TIM9_CC_IRQHandler          (void) ALIAS(DefaultIRQHandler);
  void TIM10_BRK_IRQHandler        (void) ALIAS(DefaultIRQHandler);
  void TIM10_UP__IRQHandler        (void) ALIAS(DefaultIRQHandler);
  void TIM10_TRG_COM_IRQHandler    (void) ALIAS(DefaultIRQHandler);
  void TIM10_CC_IRQHandler         (void) ALIAS(DefaultIRQHandler);

  void ETHWakeUp_IRQHandler( void ) ALIAS(DefaultIRQHandler);
  void OSC32KCal_IRQHandler( void ) ALIAS(DefaultIRQHandler);
  void OSCWakeUp_IRQHandler( void ) ALIAS(DefaultIRQHandler);
  
  
  typedef void (*pHandler) (void);
  void Init()                              __attribute__((used,section(".init")));
  extern const pHandler InterruptVector [] __attribute__((section(".text.vector"),aligned(8)));
};
const pHandler InterruptVector [] = {
  Init,
  0,
  NMI_Handler,                /* NMI */
  HardFault_Handler,          /* Hard Fault */
  0,
  Ecall_M_Mode_Handler,       /* Ecall M Mode */
  0,0,
  Ecall_U_Mode_Handler,       /* Ecall U Mode */
  Break_Point_Handler,        /* Break Point */
  0,0,
  SysTick_Handler,           /* SysTick Handler */                
  0,
  SW_Handler,                /* SW Handler */                     
  0,
  /* External Interrupts */                                              
  WWDG_IRQHandler,            /* Window Watchdog */
  PVD_IRQHandler,             /* PVD through EXTI Line detect */
  TAMPER_IRQHandler,          /* TAMPER */
  RTC_IRQHandler,             /* RTC */
  FLASH_IRQHandler,           /* Flash */
  RCC_IRQHandler,             /* RCC */
  EXTI0_IRQHandler,           /* EXTI Line 0 */
  EXTI1_IRQHandler,           /* EXTI Line 1 */
  EXTI2_IRQHandler,           /* EXTI Line 2 */
  EXTI3_IRQHandler,           /* EXTI Line 3 */
  EXTI4_IRQHandler,           /* EXTI Line 4 */
  DMA1_Channel1_IRQHandler,   /* DMA1 Channel 1 */
  DMA1_Channel2_IRQHandler,   /* DMA1 Channel 2 */
  DMA1_Channel3_IRQHandler,   /* DMA1 Channel 3 */
  DMA1_Channel4_IRQHandler,   /* DMA1 Channel 4 */
  DMA1_Channel5_IRQHandler,   /* DMA1 Channel 5 */
  DMA1_Channel6_IRQHandler,   /* DMA1 Channel 6 */
  DMA1_Channel7_IRQHandler,   /* DMA1 Channel 7 */
  ADC1_2_IRQHandler,          /* ADC1_2 */

  USB_HP_CAN1_TX_IRQHandler,  /* USB HP and CAN1 TX */
  USB_LP_CAN1_RX0_IRQHandler, /* USB LP and CAN1RX0 */
  CAN1_RX1_IRQHandler,        /* CAN1 RX1 */
  CAN1_SCE_IRQHandler,        /* CAN1 SCE */

  EXTI9_5_IRQHandler,         /* EXTI Line 9..5 */
  TIM1_BRK_IRQHandler,        /* TIM1 Break */
  TIM1_UP_IRQHandler,         /* TIM1 Update */
  TIM1_TRG_COM_IRQHandler,    /* TIM1 Trigger and Commutation */
  TIM1_CC_IRQHandler,         /* TIM1 Capture Compare */
  TIM2_IRQHandler,            /* TIM2 */
  TIM3_IRQHandler,            /* TIM3 */
  TIM4_IRQHandler,            /* TIM4 */
  I2C1_EV_IRQHandler,         /* I2C1 Event */
  I2C1_ER_IRQHandler,         /* I2C1 Error */
  I2C2_EV_IRQHandler,         /* I2C2 Event */
  I2C2_ER_IRQHandler,         /* I2C2 Error */
  SPI1_IRQHandler,            /* SPI1 */
  SPI2_IRQHandler,            /* SPI2 */
  USART1_IRQHandler,          /* USART1 */
  USART2_IRQHandler,          /* USART2 */
  USART3_IRQHandler,          /* USART3 */
  EXTI15_10_IRQHandler,       /* EXTI Line 15..10 */
  RTCAlarm_IRQHandler,        /* RTC Alarm through EXTI Line */

  USBWakeUp_IRQHandler,       /* USB Wake up from suspend */
  USBFS_IRQHandler,           /* USBHD Break */

  USBFSWakeUp_IRQHandler,     /* USBHD Wake up from suspend */
  ETH_IRQHandler,             /* ETH global */
  ETHWakeUp_IRQHandler,       /* ETH Wake up */
  0,                          /* BLE BB */
  0,                          /* BLE LLE */
  TIM5_IRQHandler,            /* TIM5 */
  UART4_IRQHandler,           /* UART4 */
  DMA1_Channel8_IRQHandler,   /* DMA1 Channel8 */
  OSC32KCal_IRQHandler,       /* OSC32KCal */
  OSCWakeUp_IRQHandler,       /* OSC Wake Up */
    
};
void Init() {
  asm volatile( R"---(
    .align 1
_start:
  j handle_reset
)---");
}
void handle_reset() noexcept {
	asm volatile(R"---(
.option push
.option norelax
	la gp, __global_pointer$
.option pop
	la sp, _eusrstack
)---"
#if __GNUC__ > 10
".option arch, +zicsr\n"
#endif
// Setup the interrupt vector, processor status and INTSYSCR.
R"---(
    /* Configure pipelining and instruction prediction */
    li t0, 0x1f
    csrw 0xbc0, t0
    
	/* Enabled nested and hardware stack */
	li t0, 0x88
	csrs mstatus, t0

    /* Configure the interrupt vector table recognition mode and entry address mode */
	la t0, InterruptVector
	ori t0, t0, 3
	csrw mtvec, t0
	
    /* Takhle RISC-V přejde do uživatelského programu. */
	csrw mepc, %[main]
	mret
)---"
: : [main]"r"(user_init)/*, [InterruptVector]"r"(InterruptVector)*/
: "t0", "memory" );
}
static void init_variables () {
    uint32_t * dst, * end;

    /* Zero fill the bss section */
    dst = &_sbss;
    end = &_ebss;
    while (dst < end) * dst++ = 0U;
    /* Copy data section from flash to RAM */
    uint32_t * src;
    src = &_data_lma;
    dst = &_data_vma;
    end = &_edata;
    if (src != dst) {
      while (dst < end) * dst++ = * src++;
    }
}    
static void init_constructors () {
    /* Pro Cortex-Mx bylo toto zbytečné, lze předpokládat, že je to tak i zde.
    count = __preinit_array_end - __preinit_array_start;
    for (unsigned i = 0; i < count; i++)  __preinit_array_start[i]();
    */
    const size_t count = __init_array_end - __init_array_start;
    for (unsigned i = 0; i < count; i++)  __init_array_start[i]();
}
void user_init () {
  init_variables();
  SystemInit();
  SystemCoreClockUpdate();
  init_constructors();      // Konstruktory zavolat až po inicializaci hodin
  main ();
  for (;;);
}
