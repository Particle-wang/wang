#include<stdio.h>
#include<math.h>
int main(void)
{
	int N;
	double sum=0; 
	int i;
	scanf("%d",&N);
	for(i=1;i<=N;i++)
	{
		sum+=sqrt(i); 
	}
	printf("sum = %0.2f",sum);
	
	return 0;
 } 
