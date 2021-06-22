
//本题需要做的判断比较多，先要判断a,b,c三个数是否为0，是否a,b为0，a是否为0（如果a=0那么这个方程是一元一次方程）
//进而判断△的值，如果△大于零输出两个实数根，等于0则输出1个根，小于零的话再次进行判断
//△<0时分为两个部分，实数部分以及虚数部分，两个变量各自表示实数以及虚数，实数不为0则输出实数+虚数i,实数为0则输出0.00+虚数i

/*
本题目要求一元二次方程ax^2＋bx＋c＝0的根，结果保留2位小数。

输入格式:
输入在一行中给出3个浮点系数a、b、c，中间用空格分开。

输出格式:
根据系数情况，输出不同结果：

1)如果方程有两个不相等的实数根，则每行输出一个根，先大后小；

2)如果方程有两个不相等复数根，则每行按照格式“实部+虚部i”输出一个根，先输出虚部为正的，后输出虚部为负的；

3)如果方程只有一个根，则直接输出此根；

4)如果系数都为0，则输出"Zero Equation"；

5)如果a和b为0，c不为0，则输出"Not An Equation"。

输入样例1:
2.1 8.9 3.5
输出样例1:
-0.44
-3.80
输入样例2:
1 2 3
输出样例2:
-1.00+1.41i
-1.00-1.41i
输入样例3:
0 2 4
输出样例3:
-2.00
输入样例4:
0 0 0
输出样例4:
Zero Equation
输入样例5:
0 0 1
输出样例5:
Not An Equation
*/ 

#include<stdio.h> 
#include<stdlib.h>
#include<math.h>
 

 

int main(void){
	float a,b,c;
	float r1,r2;
	float u1;
	float tri;
	scanf("%f %f %f",&a,&b,&c);
	tri = b*b-4.0*a*c;
	//printf("%.2f\n",tri);
	if(a==0&&b==0&&c!=0){
		printf("Not An Equation");
		return 0;
	}else if(a==0&&b==0&&c==0){
		printf("Zero Equation");
		return 0;
	}else if(a!=0){
		if(tri>0){
			r1=(-1.0*b+sqrt(tri))/(2.0*a);
			r2=(-1.0*b-sqrt(tri))/(2.0*a);
			printf("%.2f\n%.2f",r1,r2);
			return 0;
		}else if(tri==0){
		
		r1=(-1.0*b)/(2.0*a);
		printf("%.2f",r1);
		
		}else if(tri<0){
			r1=(-1.0*b)/(2.0*a);
			u1=1.0*sqrt(-1.0*tri)/(2.0*a);
			if(r1!=0){
				printf("%.2f+%.2fi\n",r1,u1);
				printf("%.2f-%.2fi\n",r1,u1);
			}else{
				printf("0.00+%.2fi\n",u1);
				printf("0.00-%.2fi\n",u1);
			}
		}
	}else{
		r1=-c/b;
		printf("%.2f\n",r1);
	}
	return 0;	
	}
	
