#include <stdio.h>
int main(void)
{
	int n;
	double sum=1.0;
	double temp=1;
	int i;
	scanf("%d",&n);
	if(n<=1000)
	{
	for(i=1;i<=n;i++)
	{
		temp*=i;
		sum+=1.0/temp;
	}
	printf("%.8f",sum);
	}
	return 0;
}
