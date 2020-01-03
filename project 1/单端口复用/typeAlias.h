#ifndef __typeAlias_h
#define __typeAlias_h

typedef unsigned char unit8_t;
typedef unsigned short unit16_t;
typedef unsigned long int unit32_t;

typedef char init8_t;
typedef short int16_t;
typedef long int32_t;

//#define F_turnOnWDT() CFGWL |= WDTE10
#define F_turnOnWDT() CFGWL = (CFGWL & 0x3f)  | 0xC0
#define F_clearWDT()  CLRWDT =   1 //看门狗使能

#endif