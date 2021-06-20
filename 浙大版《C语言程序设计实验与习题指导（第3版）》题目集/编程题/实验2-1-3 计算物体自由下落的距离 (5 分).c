/*
一个物体从100米的高空自由落下。编写程序，求它在前3秒内下落的垂直距离。设重力加速度为10米/秒2。

输入格式:
本题目没有输入。

输出格式:
按照下列格式输出

height = 垂直距离值
结果保留2位小数。


*/

#include <stdio.h>
#include <math.h>

int main (void){
    int t = 3;
    int g = 10;
    double height = 0;
    height = 1.0/2.0*g*pow(t,2);
    printf("height = %.2lf",height);
    return 0;
}
