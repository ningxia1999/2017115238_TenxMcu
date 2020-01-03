#ifndef __display_h
#define __display_h

#define P_led P1_1

#define D_ledOn 1
#define D_ledOff 0

#ifndef __display_c

#else

#endif

#define F_ledOn() P_led = D_ledOn
#define F_ledOff() P_led = D_ledOff


#endif
