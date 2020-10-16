//#include<stdio.h>//该程序会超时 
//#include<math.h>
//int main(void)
//{
//	int N;
//	int x=0;
//	int y=0;
//	int i;
//	int sum; 
//	int temp; 
//	scanf("%d",&N) ;
//	for(i=pow(10,N-1);i<pow(10,N);i++)
//	{
//		temp=i;
//		sum=0;
//		while(temp>0) 
//			{
//				x=temp%10;
//				sum+=pow(x,N);			
//				temp=temp/10;
//			}
//		if(sum==i)
//			printf("%d\n",i);	
//	} 		
//	
//	
//	 return 0;
// } 
#include<stdio.h>
//#include<math.h>
int pow(int x,int n); 
int main(void)
{
	int N;
	int x=0;
	int y=0;
	int i;
	int sum; 
	int temp; 
	scanf("%d",&N) ;
	for(i=pow(10,N-1);i<pow(10,N);i++)
	{
		temp=i;
		sum=0;
		while(temp>0) 
			{
				x=temp%10;
				sum+=pow(x,N);			
				temp=temp/10;
			}
		if(sum==i)
			printf("%d\n",i);	
		} 
		return 0;
 } 
			
int pow(int x,int n)
{
	int i;
	int outcome=1;
	for(i=0;i<n;i++)
		outcome*=x;
	
	return outcome; 
}
	

