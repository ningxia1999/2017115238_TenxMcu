typedef short int16_t;
typedef long int32_t;

#define F_turnOnWDT() CFGWL |= WDTE10
#define F_turnOnWDT() CFGWL = (CFGWL & 0x3f) | 0xC0
#define F_clearWDT() CLRWDT = 1

#endif