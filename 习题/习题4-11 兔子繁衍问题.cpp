//#include<stdio.h>
//int sum(int N);
//int main(void)
//{
//	int N;
//	int i;
//	int month;
//	scanf("%d",&N);
//	 
//	 month=sum(N);
//	 printf("%d",month); 
//	
//	return 0;
// } 
//int sum(int N)
//{
//	int i;
//	int sum=0;
//	int x=0;
//	int y=1;
//	int month=1;
//	for(i=1;;i++)
//	{
//		
//		sum=x+y;
//		x=y;
//		y=sum;
//		month++; 
//		if(sum>=N)
//			return month; 
//	} 
//} 


#include<stdio.h>
int main(void)
{
	int N;
	int i;
	int sum=0;
	int x=0;
	int y=1;
	int month=1;
	scanf("%d",&N);
	for(i=1;;i++)
	{
		
		sum=x+y;
		x=y;
		y=sum;
		month++;
		if(sum>=N) break;
	} 
		if(sum<=1)
			month=1;
	printf("%d",month); 
	
	return 0;
 } 
