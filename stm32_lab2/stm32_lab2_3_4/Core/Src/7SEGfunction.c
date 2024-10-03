/*
 * 7SEGfunction.c
 *
 *  Created on: Oct 2, 2024
 *      Author: ADMIN
 */
#include "7SEGfunction.h"

void display7SEG(int num, GPIO_TypeDef* GPIOx, uint16_t start_index) {
      __IO uint16_t temp;
      switch (num) {
          case 0: temp = 0b1000000; break;
          case 1: temp = 0b1111001; break;
          case 2: temp = 0b0100100; break;
          case 3: temp = 0b0110000; break;
          case 4: temp = 0b0011001; break;
          case 5: temp = 0b0010010; break;
          case 6: temp = 0b0000010; break;
          case 7: temp = 0b1111000; break;
          case 8: temp = 0b0; break;
          case 9: temp = 0b0010000; break;
          default: temp = !0b0; break;
      }
      uint16_t bitmask = 0b1111111 << start_index;
      GPIOx->ODR = (GPIOx->ODR & ~bitmask) | (temp << start_index);
  }
void setEnable(uint16_t num) {
    uint16_t bitmask = 0xf << 6;
    GPIOA->ODR = (GPIOA->ODR & ~bitmask) | (~(1 << num) << 6);
}
void update7SEG(int index) {
    if (index == 0) setEnable(0);
    else if (index == 1) setEnable(1);
    else if (index == 2) setEnable(2);
    else if (index == 3) setEnable(3);
    else return; // default
    display7SEG(led_buffer[index], GPIOB, 0);
}

