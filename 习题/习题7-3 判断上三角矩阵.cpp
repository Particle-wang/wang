#include<stdio.h>
const int LEN=10;
int main(void)
{
	int T;	//矩阵个数 
	int n;//矩阵行数 
	int temp=0;
	int count=0;
	int i,j,l,k,x,y,z; 
	int a[LEN][LEN];
	int o[LEN];
	
	scanf("%d",&T); 
	for(i=0;i<T;i++)
	{
		scanf("%d",&n);
		for(j=0;j<n;j++)
			for(k=0;k<n;k++)
				scanf("%d",&a[j][k]);
				
		for(y=0;y<n-1;y++)
		{	
		    temp=0; 
			for(x=n-1;x>y;x--)
				if(a[x][y]!=0)
			 	{
			 		temp=1;
			 		
			 		break;
				}
			if(temp==1)
				break; 
		}
		
			if(temp==0)
			{
				o[i]=1;
				count++;
			}
			else
			{
				o[i]=0;
				count++;
			}		
	 } 
	 
	 for(i=0;i<count;i++)
	{	
		if(o[i]==1)                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                        
	 		printf("YES\n");
		else
			printf("NO\n"); 
	 }
	return 0;
 } 
