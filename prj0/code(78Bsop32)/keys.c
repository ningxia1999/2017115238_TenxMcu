#define __keys_c
#include "includeAll.h"
//=============================================================================
unit8_t keyValue;
void GetKeys() {
  static unit8_t lastKeyValue = D_keyNull;
  if (P_key1 == 0) {
    remkeyValue = D_keyValue1;
  }
  if(P_key1==1){
    keyValue = temKeyValue;
  }
} 