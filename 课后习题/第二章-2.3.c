/*
2-7  如果rate是lf但对应改成d的话rate赋值为0，可以同时移动但不能只移动一个
2-8  见下 fahrToCelsius
2-9  见下 twoNumbers
2-10 见下 exe1
2-11 见下 exe2 
*/ 


#include<stdio.h>
#include<math.h>

int fahrToCelsius(int Temp){
	int celsius = 0;
	 celsius = 5*(Temp-32)/9;
	 printf("转化后的摄氏度为：%d\n",celsius);
	 return 0;
} 

int twoNumbers(double a,double b){
	int sum = a+b;
	int minus = a-b;
	int times = a*b;
	double divided = a/b;
	printf("数字%.2lf和%.2lf的和是%d,\n差是%d,\n积是%d,\n商是%.2lf\n",a,b,sum,minus,times,divided);
	return 0;
}

int exe1(int x1){
	double y1=0;
	if(x1==0){
		y1=0;
		printf("%lf\n",y1);
	}else{
		y1=1.0/x1;
		printf("%lf\n",y1);
	}
	return 0;
}

int exe2(int x2){
	double y2=0;
	if(x2<0){
		y2 =(pow(x2,5)+2*x2+1.0/x2)*x2;
		printf("%.2lf\n",y2);
	}else{
		y2 = sqrt(x2);
		printf("%.2lf\n",y2);
	}
	return 0;
}

int main(void){
	int Temp = 0;
	printf("请输入华氏温度：\n");
	scanf("%d",&Temp);
	fahrToCelsius(Temp);
	
	double a,b=0;
	printf("请输入两个数字\n");
	scanf("%lf %lf",&a,&b);
	twoNumbers(a,b);
	
	int x1=0;
	printf("请输入练习2-10的X值\n");
	scanf("%d",&x1);
	exe1(x1);
	
	double x2=0;
	printf("请输入练习2-11的X值\n");
	scanf("%lf",&x2);
	exe1(x2);
	
	return 0;
}

