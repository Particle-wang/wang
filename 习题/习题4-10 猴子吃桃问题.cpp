#include<stdio.h>
int main(void)
{
	int N;//��N��ʣһ������ 
//	int sum=0;  
	int y=1;//ʣ���������� ,�õ�һ��ʣ�������������ӵ�����
	int i; 
	scanf("%d",&N);
	for(i=1;i<N;i++)
	{  
		y=(y+1 )*2;
	} 
	 
	printf("%d",y);
	
	return 0;
 } 
