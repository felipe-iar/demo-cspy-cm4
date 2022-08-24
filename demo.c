/**
 * @file demo.c
 * @author Felipe Torrezan
 * @date 2022-08-23
 * @brief Demonstrates a simulated reset using C-SPY Macros
 *
 * @license See LICENSE for detailed license information
 *
 */

#include "cm4-generic.h"

__root unsigned int wdt;

void main()
{
  wdt = 0;
  while (1) {
    ++wdt;
    if (wdt % 10000 == 0) {
      __NVIC_SystemReset();
    }
  }
}
