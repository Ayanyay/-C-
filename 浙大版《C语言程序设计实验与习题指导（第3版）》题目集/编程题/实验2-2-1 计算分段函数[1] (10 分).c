/*
本题目要求计算下列分段函数f(x)的值：

公式

输入格式:
输入在一行中给出实数x。

输出格式:
在一行中按“f(x) = result”的格式输出，其中x与result都保留一位小数。

输入样例1:
10
输出样例1:
f(10.0) = 0.1
输入样例2:
0
输出样例2:
f(0.0) = 0.0
https://pintia.cn/problem-sets/13/problems/395
*/

#include<stdio.h>
#include<math.h>

int main(void){
    double x=0,result=0; //初始化本题所需要的变量x以及x运算后的结果result 
    scanf("%lf",&x);	 //读取用户输入 
    if(x==0){			 //条件判断，如果x=0则result=0,x不为0时result为1/x 
    	result = 0;
    	printf("f(%.1lf) = %.1lf",x,result);
    	return 0;
	}else{
		result = 1.0/x;
		printf("f(%.1lf) = %.1lf",x,result);
    	return 0;
	}
	return 0;
}
