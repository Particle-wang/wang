#include<stdio.h>
#include<math.h> 
int main(void)
{
	double x;
	double y; 
	scanf("%lf",&x); 
	if (x>=0)
		y=pow(x,0.5);
	else
		y=(pow(x+1,2)+1/x+2*x);
	printf("f(%0.2f) = %0.2f",x,y);
	
	return 0;
	 
 } 
