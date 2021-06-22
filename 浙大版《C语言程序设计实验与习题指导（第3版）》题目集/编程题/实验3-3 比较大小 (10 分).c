/*
本题要求将输入的任意3个整数从小到大输出。

输入格式:
输入在一行中给出3个整数，其间以空格分隔。

输出格式:
在一行中将3个整数从小到大输出，其间以“->”相连。

输入样例:
4 2 8
输出样例:
2->4->8
*/ 

#include<stdio.h> 
#include<stdlib.h>
#include<math.h>
 

 

int main(void){
	int a,b,c;
	int t;
	scanf("%d %d %d",&a,&b,&c);
	if(a>b){                              //如果a>b,那么a的值由t暂时保存，a与b交换位置（把b的值赋给a）,然后把t暂存的a的值赋给b,那么目前的话是 a<b这个顺序
		t=a;
		a=b;
		b=t;
	}
	if(a>c){                              //如果a>c,那么a的值由t暂时保存，a与c交换位置（把c的值赋给a）,然后把t暂存的a的值赋给c,那么目前的话是 a<c这个顺序
		t=a;
		a=c;
		c=t;
	}
	if(b>c){                              //如果b>c,那么b的值由t暂时保存，b与c交换位置（把c的值赋给b）,然后把t暂存的b的值赋给c,那么目前的话是 b<c这个顺序
		t=b;
		b=c;
		c=t;
	}
	printf("%d->%d->%d",a,b,c);
	return 0;	
}
	
