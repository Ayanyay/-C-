/*
本题要求编写程序，计算序列 1!+2!+3!+⋯ 的前N项之和。

输入格式:
输入在一行中给出一个不超过12的正整数N。

输出格式:
在一行中输出整数结果。

输入样例:
5
输出样例:
153
*/

#include<stdio.h>
#include<math.h>
#include<stdlib.h>

int calSum(void){
	int n,i,x=1,sum=0;
	scanf("%d",&n);
	
	for(i=1;i<=n;i++){
		x=x*i;
		sum+=x;	
	}
	printf("%d\n",sum);
	return 0;	
}

int main(void){
    calSum();
	return 0;
}
