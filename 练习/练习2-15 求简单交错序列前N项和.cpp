#include<stdio.h> 
int main(void)
{
	double sum=0;
	int N;
	int i;
	int count;
	int abs; 
	scanf("%d",&N); 
	for(i=1,count=1,abs=1;count<=N;i+=3,count++,abs*=-1) 
	{
		sum+=abs*1.0/i;
	}
	printf("sum = %0.3f",sum);
	 
	return 0;
	 
}
