
//此题目需要输出的是3的乘方表，不是任意整数的乘方表，所以本题惟一的输入是需要制表到3的多少次方

/*
输入一个非负整数n，生成一张3的乘方表，输出3
?0
?? ~3
?n
?? 的值。可调用幂函数计算3的乘方。

输入格式:
输入在一行中给出一个非负整数n。

输出格式:
按照幂的递增顺序输出n+1行，每行格式为“pow(3,i) = 3的i次幂的值”。题目保证输出数据不超过长整型整数的范围。

输入样例:
3
输出样例:
pow(3,0) = 1
pow(3,1) = 3
pow(3,2) = 9
pow(3,3) = 27
*/

#include<stdio.h>
#include<math.h>
#include<stdlib.h>

int calSum(void){
	int n,i,x;
	scanf("%d",&n);
	
	for(i=0;i<=n;i++){
		x=pow(3,i);
		printf("pow(3,%d) = %d\n",i,x);
	}
	return 0;	
}

int main(void){
    calSum();
	return 0;
}
