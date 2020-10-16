#include<stdio.h>
				//调试好多次 
int main(void)
{
	int M;
	int N;
	int temp;
	int  divisor;
	int  multiple; 
	int i,j;
	scanf("%d %d",&M,&N);
	if(M>N) 
	{
		temp=M;
		M=N;
		N=temp; 
	}
	for(i=M;i>0;i--)
	{
		if(M%i==0&&N%i==0)
		{
			printf("%d ",divisor=i);
			break;
		}
	}
	 for(i=1;i<N;i++)
	 {
		for(j=2;j<=N;j++)
	 	{
	 		if(M*j==N*i)
	 		{
				printf("%d\n",multiple=M*j);
	 			break; 	
	 		}
		}
		if(M*j==N*i) break;
	}
	return 0;
		 
 } 
