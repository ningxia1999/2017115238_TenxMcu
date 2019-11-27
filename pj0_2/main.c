void main() {
  SysInit();
  VarsInit();
  F_ledOn();
  delayMs(500);

  while (1) {
    //喂狗
    // F_turnOnWDT();
   // F_ledOff();
    // delayMs(500);
    // F_ledOn();
    // delayMs(500);
    GetKeys();
    if (D_keyValue1 == keyValue) {
      F_ledNeg();
    }
    keyValue = D_keyNull;
  }
}
//=============================================================================
@@ -19,6 +27,7 @@ void delayMs(uint16_t msCount) {
  for (i = 0; i < msCount; i++) {
    for (j = 0; j < 1000; j++) {
      /* code */
      // F_turnOnWDT();
    }
  }
}