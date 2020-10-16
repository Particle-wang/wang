#include<stdio.h>

int main(void)
{
	double X;//初始高度
	int n;//反弹次数
	double sum=0;//总路程
	double nx;//第n次反弹高度
	double temp; 
	int i; 
	scanf("%lf %d",&X,&n);
	temp=X;
	for(i=0;i<n;i++)
	{
	
		sum+=temp;
		X=X/2;
		temp=X*2;
		nx=X;	
	} 
	printf("%.1f %.1f",sum,nx) ; 
	
	return 0;
 } 
