/*
本题要求编写程序，计算序列 1 + 1/3 + 1/5 + ... 的前N项之和。

输入格式:
输入在一行中给出一个正整数N。

输出格式:
在一行中按照“sum = S”的格式输出部分和的值S，精确到小数点后6位。题目保证计算结果不超过双精度范围。

输入样例:
23
输出样例:
sum = 2.549541
*/

#include<stdio.h>
#include<math.h>

int Sum(void){
	int n;
	double sum=0,i,a=1;
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		sum=sum+1.0/a;
		a+=2;
	}
	printf("sum = %.6lf",sum);
	return 0;
}

int main(void){
    Sum();
	return 0;
}
