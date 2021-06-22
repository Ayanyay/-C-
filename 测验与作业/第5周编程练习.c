/*
1素数和（5分）
题目内容：

我们认为2是第一个素数，3是第二个素数，5是第三个素数，依次类推。

现在，给定两个整数n和m，0<n<=m<=200，你的程序要计算第n个素数到第m个素数之间所有的素数的和，包括第n个素数和第m个素数。



输入格式:

两个整数，第一个表示n，第二个表示m。



输出格式：

一个整数，表示第n个素数到第m个素数之间所有的素数的和，包括第n个素数和第m个素数。



输入样例：

2 4



输出样例：

15

时间限制：500ms内存限制：32000kb

2念整数（5分）
题目内容：

你的程序要读入一个整数，范围是[-100000,100000]。然后，用汉语拼音将这个整数的每一位输出出来。

如输入1234，则输出：

yi er san si

注意，每个字的拼音之间有一个空格，但是最后的字后面没有空格。当遇到负数时，在输出的开头加上“fu”，如-2341输出为：

fu er san si yi



输入格式:

一个整数，范围是[-100000,100000]。



输出格式：

表示这个整数的每一位数字的汉语拼音，每一位数字的拼音之间以空格分隔，末尾没有空格。



输入样例：

-30



输出样例：

fu san ling

时间限制：500ms内存限制：32000kb

*/ 

#include<stdio.h> 
#include<stdlib.h>
#include<math.h>
 
int psum(void){
	int n,m,i,p,sum=0,count=0,isPrime;
	scanf("%d %d",&n,&m);
	for(i=2;count<m;i++){
		isPrime=1;
		for(p=2;p<i;p++){
			if(i%p==0){
				isPrime=0;
				break;
			}
		}
	if(isPrime==1){
		count++;
		if(count>=n&&count<=m){
			sum= sum+i;
		}
	}
}
	printf("%d",sum);
	return 0;
}

int swit(int n){
	switch(n){
			case 0:
				printf("ling");
				break;
			case 1:
				printf("yi");
				break;
			case 2:
				printf("er");
				break;
			case 3:
				printf("san");
				break;
			case 4:
				printf("si");
				break;
			case 5:
				printf("wu");
				break;
			case 6:
				printf("liu");
				break;
			case 7:
				printf("qi");
				break;
			case 8:
				printf("ba");
				break;
			case 9:
				printf("jiu");
				break;
		}
}

int numT(void){
	int count=0,num,temp,mask=0,i,a,n;
	scanf("%d",&num);
	temp=abs(num);
	if(num<0){
		printf("fu ");
	}else{
		printf("zheng ");
	}
	
	do{
		temp=temp/10;
		count++;
	}while(temp>0);
	
	temp=abs(num);
	n=count;
	for(i=1;i<=n;i++){
		mask=pow(10,count-1);
		a=temp/mask;
		count--;
		swit(a);
		if(count>0){
			printf(" ");
		}
		temp=temp%mask;
	}
	
	return 0;
}
 

int main(void){
	int n;
	psum(); 
	numT();
	return 0;
}
	
