/*
本题要求编写程序，计算交错序列 1-2/3+3/5-4/7+5/9-6/11+... 的前N项之和。

输入格式:
输入在一行中给出一个正整数N。

输出格式:
在一行中输出部分和的值，结果保留三位小数。

输入样例:
5
输出样例:
0.917
*/

#include<stdio.h>
#include<math.h>

int calSum(void){
	int n,i;                //可用额外的变量比如sign=1来切换符号,for循环后sign-=sign即可，省去了for之内的if循环，具体可见2-3-4
	double sum=1,a=3;
	scanf("%d",&n);
	for(i=2;i<=n;i++){
		if(i%2==0){
			sum-=(i/a);
			a+=2;
		}else{
			sum+=(i/a);
			a+=2;
		}	
	}
	printf("%.3lf",sum);
}

int main(void){
    calSum();
	return 0;
}
