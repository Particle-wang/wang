#include<stdio.h>
#include<math.h>

int main(void)
{
	double eps;
	int i;
	int abs=1; 
	double sum=0.0;
	scanf("%lf",&eps);
	for(i=1;;i+=3,abs*=-1)
	{ 
		sum+=1.0/i*abs;
		
		if((1.0/i)<=eps)
			break;	
	} 
	printf("sum = %.6f",sum); 
	return 0;
}




