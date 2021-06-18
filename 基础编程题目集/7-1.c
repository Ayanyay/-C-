#include <stdio.h>

int main(){
	
	int height;
	
	scanf("%d",&height);
	
	int feet = height/30.48;
	
	int inch = (height/30.48-feet)*12;
	
	printf("%d %d",feet,inch);
		
	return 0;
}
