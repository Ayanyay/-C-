/*
为了提倡居民节约用电，某省电力公司执行“阶梯电价”，安装一户一表的居民用户电价分为两个“阶梯”：月用电量50千瓦时（含50千瓦时）以内的，电价为0.53元/千瓦时；超过50千瓦时的，超出部分的用电量，电价上调0.05元/千瓦时。请编写程序计算电费。

输入格式:
输入在一行中给出某用户的月用电量（单位：千瓦时）。

输出格式:
在一行中输出该用户应支付的电费（元），结果保留两位小数，格式如：“cost = 应付电费值”；若用电量小于0，则输出"Invalid Value!"。

输入样例1:
10
输出样例1:
cost = 5.30
输入样例2:
100
输出样例2:
cost = 55.50
*/

#include<stdio.h>
#include<math.h>

int elec(void){
	int e;
	double cost;
	scanf("%d",&e);
	if(e<0){
		printf("Invalid Value!");
		return 0;
	}
	if(e<=50&&e>=0){
			cost=0.53*e;
		}
	else{
		cost=0.53*50+(0.53+0.05)*(e-50);
		
		}
	printf("cost = %.2lf",cost);
	return 0;
}

int main(void){
    elec();
	return 0;
}
