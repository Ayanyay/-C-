/*
习题1
1. 对C 语有来说， 下列标识符中哪些是合法的，哪些是不合法的？
total, _debug , Large&Tall, Counterl, begin_
2 改写I. 4 节中的流程图I. 2 . 求1 - LOO 中能被6 整除的所有整数的和。
3 改写I. 4 节中的程序，求I- J OO 中能被6 整除的所有整数的和．并在编程环埮
中验证该程序的运行结果。
4. 对于给定的整数n ( n>I ) ，消设计一个流程图判别n 是否为一个素数（ 只能被
1 和自己整除的整数） ｀ 井分析该流程图中哪些是顺序结构、分支结构与循环结构．
*/
/*
1. total _debug Counter1 begin_合法

*/

#include<stdio.h>
 
int dividedbysix(void){						/*1-100中能够被6整除数字之和*/ 
  int i,sum = 0;
  
  for(i=1;i<=100;i++){						/*i从1开始直到100，i能被6整除则与sum相加直至i=100*/
    if(i%6==0){
      sum=sum+i;
    }
  }
  printf("%d\n",sum);						/*输出数字之和*/
  return 0;
}

int PrimeNum(int N){						/*判断输入进来的数字是否是素数*/
	int i,count=0;						/*定义变量i以及count*/
	
	for(i=2;i<N;i++){
		if(N%i==0){					/*当输入的数字N能够整除i时则count自动加一，i从2开始循环到N-1*/
			count++;
		}
	}
	if(count==0){						/*如果count为0，则证明2到N-1的数字都不能整除N，所以N是素数*/ 
		printf("这个数为素数");
	}else{
		printf("这个数不是素数");
	}
	return 0;
}

int main(void){
	int N;
	dividedbysix();
	printf("请输入一个数：");
	scanf("%d",&N);
	PrimeNum(N);
	return 0;
}
