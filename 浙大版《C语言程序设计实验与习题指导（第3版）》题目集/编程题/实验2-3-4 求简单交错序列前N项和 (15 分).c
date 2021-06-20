/*
本题要求编写程序,计算序列 1 - 1/4 + 1/7 - 1/10 + ... 的前N项之和。

输入格式:
输入在一行中给出一个正整数N。

输出格式:
在一行中按照“sum = S”的格式输出部分和的值S，精确到小数点后三位。题目保证计算结果不超过双精度范围。

输入样例:
10
输出样例:
sum = 0.819
*/

#include<stdio.h>
#include<math.h>

/*
int Sum(void){
	int n,i;
	double result=0,a=1;
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		if(i%2==0){
			result-=1.0/a;
			a+=3;
		}else{
			result+=1.0/a;
			a+=3;
		}
	}
	printf("sum = %.3lf",result);
	return 0;
}
*/



int Sum1(void){                   //改进代码,用sign代表正负号省去了for循环中if判断,在for循环结尾-=直接进行符号切换
  int n,i,sign=1;
	double result=0,a=1;
	scanf("%d",&n);
	for(i=1;i<=n;i++){
    result+=1.0/a*sign;
    a+=3;
    sign=-sign;
  }
  printf("sum = %.3lf",result);
  return 0;
}

    

int main(void){
    Sum1();
	return 0;
}
