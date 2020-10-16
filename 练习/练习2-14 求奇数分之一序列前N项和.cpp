#include<stdio.h> 
int main(void)
{
	double sum=0;
	int N;
	int i;
	int count; 
	scanf("%d",&N); 
	for(i=1,count=1;count<=N;i+=2,count++) 
	{
		sum+=1.0/i;
	}
	printf("sum = %0.6f",sum);
	 
	return 0;
	 
 } 
