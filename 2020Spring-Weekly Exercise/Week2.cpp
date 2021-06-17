#include <stdio.h>

int main(){
  
  int a;                             /*初始化变量a*/
  
  scanf("%d", &a);                  /*获取输入的数字*/ 	
  
  int aFirst,aSecond,aThird;         /*初始化3个变量来表示a的个位十位百位*/
  
  aFirst = a/100;                   /*取得a的第一位*/ 
  
  aSecond = (a-aFirst*100)/10;
  
  aThird = a%10;
  
  int aNew = aThird*100+aSecond*10+aFirst;          /*组合成新变量*/
  
  printf("%d",aNew);
  
  }
