#include<stdio.h>

int main(void)
{
	double X;//��ʼ�߶�
	int n;//��������
	double sum=0;//��·��
	double nx;//��n�η����߶�
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
