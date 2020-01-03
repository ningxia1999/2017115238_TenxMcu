#ifndef __display_h
#define __display_h
// Hal: exp: #define P_led P10 -----------------
#define P_led P1_0

#define D_ledOn 1
#define D_ledOff 0

#ifdef __display_c

#else

#endif

#define F_ledOn() P_led = D_ledOn
#define F_ledOff() P_led = D_ledOff
#define F_ledNeg() P_led = P_led

#endif