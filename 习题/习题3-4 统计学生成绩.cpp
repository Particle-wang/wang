#include<stdio.h>

int main(void)
{
	int N;
	int result; 
//	double average=0;
//	int count =0;
	int i;
	int A=0,B=0,C=0,D=0,E=0;
	scanf("%d",&N);
	for(i=0;i<N;i++)
	{
		scanf("%d ",&result);
		if (result>=90)
			A++;
		else if (result>=80)
			B++;
		else if (result>=70)
			C++;
		else if (result>=60)
			D++;
		else
			E++;
		
	}
	printf("%d %d %d %d %d",A,B,C,D,E);
	
	return 0; 
 } 
