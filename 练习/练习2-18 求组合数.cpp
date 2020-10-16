#include<stdio.h> 
double fect(int n);

int main(void)
{
	int m,n;
	double result=0;
	scanf("%d %d",&m,&n);
	result=fect(n)/(fect(m)*fect(n-m));
	printf("result = %.f",result);
	
	return 0; 
 } 
 double fect(int n)
 {
 	int i;
 	double sum=1;
 	for(i=1;i<=n;i++)
 		sum*=i;
 		
 	return sum;
 }
