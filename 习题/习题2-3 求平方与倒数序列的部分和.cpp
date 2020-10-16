#include<stdio.h>
#include<math.h>
int main(void)
{
	int m,n;
	double sum=0; 
	int i;
	scanf("%d %d",&m,&n);
	for(i=m;i<=n;i++)
	{
		sum+=pow(i,2)+1/(i*1.0); 
	}
	printf("sum = %0.6f",sum);
	
	return 0;
 } 
