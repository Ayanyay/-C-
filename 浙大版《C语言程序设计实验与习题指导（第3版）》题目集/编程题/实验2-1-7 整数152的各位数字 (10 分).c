/*
本题要求编写程序，输出整数152的个位数字、十位数字和百位数字的值。

输入格式：
本题无输入。

输出格式：
按照以下格式输出：

152 = 个位数字 + 十位数字*10 + 百位数字*100
*/

#include<stdio.h>

int main(void){
    int first,second,third;
    first = 152/100;
    second = (152-first*100)/10;
    third = (152-first*100-second*10)/1;
    printf("152 = %d + %d*10 + %d*100",third,second,first);
    return 0;
}
