
//本题需要自己定义一个函数fact以方便计算，不过要看清题目要求（函数类型是double，n的类型是int）。如果函数类型不对的话会影响输入结果

/*
本题要求编写程序，根据公式C
?n
?m
?? =
?m!(n?m)!
?
?n!
?? 算出从n个不同元素中取出m个元素（m≤n）的组合数。

建议定义和调用函数fact(n)计算n!，其中n的类型是int，函数类型是double。

输入格式:
输入在一行中给出两个正整数m和n（m≤n），以空格分隔。

输出格式:
按照格式“result = 组合数计算结果”输出。题目保证结果在double类型范围内。

输入样例:
2 7
输出样例:
result = 21
*/

#include<stdio.h>
#include<math.h>
#include<stdlib.h>
double fact(int a){
	int i;
	double c=1;
	for(i=1;i<=a;i++){
		c*=i;
	}
	return c;
}


int calSum(void){
	int m,n;
	double sum=0;
	scanf("%d %d",&m,&n);
	
	sum=fact(n)/(fact(m)*fact(n-m));
	printf("result = %.0lf\n",sum);
	return 0;	
}

int main(void){
    calSum();
	return 0;
}
