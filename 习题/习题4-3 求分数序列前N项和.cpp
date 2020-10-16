#include<stdio.h>

int main(void)
{
	int N;
	double fenzi,fenmu;
	double temp=0;
	int i; 
	double sum=0.0;
	scanf("%d",&N);
	for(i=0,fenmu=1,fenzi=2;i<N;i++)
	{
		sum+=1.0*fenzi/fenmu ;
		temp=fenzi;
		fenzi=fenmu+fenzi;
		fenmu=temp; 
	 } 
	 printf("%0.2f",sum);
	 
	 return 0;
 } 
