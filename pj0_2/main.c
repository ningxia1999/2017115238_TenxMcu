void main() {
  SysInit();
  VarsInit();

  while (1) {
    F_turnOnWDT();
    // user coding
@@ -16,8 +15,9 @@ void main() {
}
//=============================================================================
void delayMs(uint16_t msCount) {
  for (uint16_t i = 0; i < msCount; i++) {
    for (uint16_t j = 0; j < 1000; j++) {
  uint16_t i, j;
  for (i = 0; i < msCount; i++) {
    for (j = 0; j < 1000; j++) {
      /* code */
    }
  }