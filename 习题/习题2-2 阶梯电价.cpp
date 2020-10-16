#include<stdio.h> 
#define Q 50 
const double x1 =0.53;
const double  x2 =0.53+0.05;
int main(void)
{
	double cost;
	int n;//”√µÁ¡ø
	scanf("%d",&n);
	if(n<0)
		printf("Invalid Value!"); 
	else if(n<=50)
		printf("cost = %.2f",cost=n*x1);
	else 
		printf("cost = %.2f",cost=Q*x1+(n-Q)*x2); 
 		
 	return 0;
 }
