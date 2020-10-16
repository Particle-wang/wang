#include <stdio.h>
#include<math.h>
int main(void)
{
	double x;
	int i;
	double sum=1;
	double temp=1;
	scanf("%lf",&x);
	if(x>=0&&x<=5)
	{
		for(i=1;;i++)
		{
			temp*=i;
			sum+=1.0*pow(x,i)/temp;
			
			if(fabs(pow(x,i)/temp)<0.00001)
				break;
		}
		printf("%.4f",sum);
	}
	
	return 0;
}
