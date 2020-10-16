#include<stdio.h>
const int LEN=6;
int main(void)
{
	int n;
	int i,j,k,l;
	int min,max;
	int temp=0;
	int a[LEN][LEN];
	scanf("%d",&n);
	for(i=0;i<n;i++)
		for(j=0;j<n;j++)
			scanf("%d",&a[i][j]);
		
	if(n>=1&&n<=6)
	{

		for(i=0;i<n;i++)
		{
			max=a[i][0];
			for(j=0;j<n;j++) 
			{
				if(a[i][j]>=max)
				{	
					max=a[i][j];
					l=j;	 
				} 
			}
				min=max ;
				for(k=0;k<n;k++)
					if(a[k][l]<min)
						min=a[k][l];
				if(min==max)
				{
					printf("%d %d",i,l);
					temp=1;
				}
			
		}
	} 
	if(temp==0)
		printf("NONE");
	return 0;
 } 
