void main() {
  SysInit();
  VarsInit();

  //使能看门狗
  F_turnOnWDT();

  while (1) {
    //喂狗
      F_clearWDT();
   //业务代码
    TimeProcess();
    TaskSetting();
    TaskProcess();
    DisplayProcess();
  }
}
//=============================================================================
void TimeProcess() {
  static uint8_t timer5ms = 0;
  static uint16_t second = 0;

  if (b1ms) {
    // 1ms 执行一次
    b1ms = 0;
    timer5ms++;
    second++;
  }
  if (timer5ms >= D_5ms) {

    GetKeys();
     }
  if (second >= D_1000ms) {
    // 1s 执行一次
    second = 0;
   }
}
//=============================================================================
void DelayMs(uint16_t msCount) {
        uint16_t i, j;
  for (i = 0; i < msCount; i++) {
    for (j = 0; j < 1000; j++) {
      /* code */
        F_clearWDT();
    }
  }
}