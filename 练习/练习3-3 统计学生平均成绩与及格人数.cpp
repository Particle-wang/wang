#include<stdio.h>

int main(void)
{
	int N;
	int results; 
	double average=0;
	int count =0;
	int i;
	scanf("%d",&N);
	for(i=0;i<N;i++)
	{
		scanf("%d ",&results);
		average+=1.0*results/N;
		if (results>=60)
			count++; 
	}
	 printf("average = %.1f\ncount = %d",average,count);
	
	return 0; 
 } 
