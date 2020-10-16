#include<stdio.h>

int main(void)
{
	int a;
	int n;
	int i; 
	double temp=0;
	double sum=0;
	scanf("%d %d",&a,&n); 
	for(i=0,temp=a;i<n;i++)
	{
		sum+=a; 
//		temp=n; 
		a=a*10+temp;
	}
	printf("s = %.f",sum); 
	 return 0;
 } 
