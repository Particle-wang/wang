#include<stdio.h>
int main(void)
{
	int N;//第N天剩一个桃子 
//	int sum=0;  
	int y=1;//剩余桃子数量 ,用第一天剩余数量反推桃子的数量
	int i; 
	scanf("%d",&N);
	for(i=1;i<N;i++)
	{  
		y=(y+1 )*2;
	} 
	 
	printf("%d",y);
	
	return 0;
 } 
