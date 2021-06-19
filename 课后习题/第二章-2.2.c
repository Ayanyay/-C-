/*
［ 练习2-4) 温度转换：求华氏温度150 下对应的摄氏温度（ 计箕公式同例2-3 ) 。
试编写相应程序。
【练习2一5 ] 算术表达式5 • (fahr-32 ) /9 能改写成5 ( fahr-32) /9 吗？为什么？缺少运算符号
如果将其改写为5/9 * ( fahr-32 ) ，会影响运算结果吗？ 5/9在C语言中是0，除非5或者9是5.0或者9.0
［ 练习2-6] 计箕物体自由下落的距岗· 一个物体从100 米的高空自由落下，求它
在前3 秒内下落的垂直距离。设煎力加速度为1 0 m/s2 。试编写相应程序。
*/

#include<stdio.h>
#include<math.h>
int fatocel(void){
  int celsius,fahr;
  fahr = 150;
  celsius = 5*(fahr-32)/9;
  printf("fahr=%d,celsius=%d\n",fahr,celsius);
  
  celsius = 5/9*(fahr-32);
  printf("fahr=%d,celsius=%d\n",fahr,celsius);
  
  return 0; 
}

int distance(void){
	int vertiDis=0;
	vertiDis = 1*(10*pow(3,2))/2;
	printf("%d\n",vertiDis);
	return 0;
}

int distanceV(int G,int T){
	int verticalDis = 0;
	verticalDis = 1*(G*pow(T,2))/2;
	printf("%d\n",verticalDis);
	return 0;
}
int main(void){
	int G = 0;
	int T = 0;
	fatocel();
	distance();
	scanf("%d %d",&G,&T);
	distanceV(G,T);
	return 0;
	
}
