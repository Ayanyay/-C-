/*

［ 练习2-1] 输出短句( Programming in C is fun ! ) ： 在屏菇上显示一个短句“ Programming in C is fun! " 。试编写相应程序。
［ 练习2-2] 下列语句的运行结果是什么？与例2-2 的运行结果有何不同？为什么？
           printf (“Programming is fun . And Programming in C is even more fun!\ n•) :
［ 练习2 -3 ] 输出倒三角图案：在屏驸上显示如下倒三角图案。试编写相应程序。
* * * *
 * * *
  * *
   * 
   
   */

#include<stdio.h>

int ProCFun(void){                                        /* 2-1 */
  printf("Programming in C is fun !\n");
  return 0;
}

/* 例2-2为  printf ( "Programming is fun!"） ;
            printf ( And pro9rammin9 in C is even more fun ! \ n " ) ;
   
   不同点是例2-2输出为两行，练习2-2中两句话没有另起一行，输出是单行         
            
*/

int reverseTri(void){
  printf("* * * *\n * * *\n  * *\n   *");
  return 0;
}

int main(void){
  ProCFun();
  reverseTri();
  return 0;
}
