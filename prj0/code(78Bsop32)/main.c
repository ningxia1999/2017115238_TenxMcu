#define __main_c
#include "includeAll.h"
.//extern unit8_t keyValue;
//=============================================================================
void main() {
  SysInit();
  VarsInit();
//  F_turnOnWDT();
  F_ledOn();
  delayMs(500);
 // 使能开门狗
 F_turnOnWDT();

  while (1) {
       //喂狗
    F_clearWDT;
    // user coding
    // F_ledOff();
    // delayMs(500);
    // F_ledOn();
     delayMs(500);
    GetKeys();
    if (D_keyValue1 == keyValue) {
      F_ledNeg();//Ctrol+F,断点
    }
    keyValue = D_keyNull;
  }
}
//=============================================================================
void delayMs(uint16_t msCount) {
  uint16_t i, j;
  for (i = 0; i < msCount; i++) {
    for (j = 0; j < 1000; j++) {
      /* code */
    F_clearWTD();

    }
  }
}