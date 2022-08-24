#ifndef __CM4_GENERIC__
#define __CM4_GENERIC__

// Generic IRQ values for an Arm Cortex-M4 device (stub)
typedef enum IRQn {
  /******  Cortex-M4 Processor Exceptions Numbers *****************************/
  NonMaskableInt_IRQn    = -14,  /*!< 2 Non Maskable Interrupt                */
  MemoryManagement_IRQn  = -12,  /*!< 4 Cortex-M4 Memory Management Interrupt */
  BusFault_IRQn          = -11,  /*!< 5 Cortex-M4 Bus Fault Interrupt         */
  UsageFault_IRQn        = -10,  /*!< 6 Cortex-M4 Usage Fault Interrupt       */
  SVCall_IRQn            = -5,   /*!< 11 Cortex-M4 SV Call Interrupt          */
  DebugMonitor_IRQn      = -4,   /*!< 12 Cortex-M4 Debug Monitor Interrupt    */
  PendSV_IRQn            = -2,   /*!< 14 Cortex-M4 Pend SV Interrupt          */
  SysTick_IRQn           = -1,   /*!< 15 Cortex-M4 System Tick Interrupt      */
} IRQn_Type;

// Generic number of priority bits for an Arm Cortex-M4 device (stub)
#define __NVIC_PRIO_BITS (4)

// CMSIS Cortex-M4 Core Peripheral Access Layer Header File
#include <core_cm4.h>

#endif /*__CM4_GENERIC__*/