#define __keys_c
#include "includeAll.h"
//================================================
void GetKeys(){
  static uint8_t tmpKeyValue = D_keyNull;//静态局部变量初始化为0，每次执行函数保持上一次的执行时的值
  
  if(P_key1 == 0){
      tempKeyValue = D_keyValue1;

  }
  else {
      keyValue = tempKeyValue;
      tempKeyValue = D_keyNull;
  }

}