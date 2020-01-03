#define __main_c
#include "includeAll.h"
int modeValue = 1;
//===================================================
void main(){
    SysInit();
    VarsInit();

    F_turnOnWDT();

    while (1)
    {
        F_clearWDT();

        TimeProcess();
        TaskSetting();
        /* code */
    }
}
//===============================================
void TimeProcess(){
    static unit8_t time5ms = 0;

    if(b1ms){
      // 1ms 执行一次
      b1ms = 0;
      timer5ms++;
    }
    if(time5ms >= 5 ){
       P1MODL = 0xa8;//设置为上拉输入
    	GetKeys();//获取键值 
    }
//===============================================
void TaskProcess(){}
//==================================================
void TaskSetting(){
    if(modeValue == 1){ /模式标志为1时，该模式为推挽输出
		//LED状态转换
		 if(D_keyValue1 == keyValue){
			modeValue = ~modeValue;		//模式标志为取反
		 }
		 P1MODL = 0xaa;		//将模式置为推挽输出，使LED显示
   }		
	 else {//否则，该模式为上拉输入
			if(D_keyValue1 == keyValue){
				modeValue = ~modeValue;	
			}
		}
}
//=============================================================================
void DisplayProcess() {
  // F_ledOn();
}