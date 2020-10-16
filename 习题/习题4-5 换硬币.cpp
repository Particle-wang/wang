#include<stdio.h>
int main(void)
{
	int n; 
//	int fen5=0;
//	int fen2=0;
//	int fen1=0;
//	int total=0;
	int count=0;
	int i,j,k; 
	scanf("%d",&n);
	if(n>8&&n<100)
	{	
		for(i=n/5;i>0;i--)
			for(j=n/2;j>0;j--)
				for(k=n;k>0;k--)
					if(i*5+j*2+k==n)
					{ 
						printf("fen5:%d, fen2:%d, fen1:%d, total:%d\n"
						       ,i,j,k,i+j+k); 
						count++; 
					}
						 
						printf("count = %d",count);
	}
	
	 return 0;
 } 
