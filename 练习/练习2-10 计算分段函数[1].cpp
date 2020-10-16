#include<stdio.h>

int main(void)
{
	double x;
	double y; 
	scanf("%lf",&x); 
	if (x==0)
		y=0;
	else
		y=1/x;
	printf("f(%0.1f) = %0.1f",x,y);
	
	return 0;
	 
 } 
