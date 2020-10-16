#include<stdio.h>
const int LEN =10;
int main(void)
{
	int a[LEN];
	int x;
	int i,j;
	int temp=0;
	int index=0;
	int max;
	scanf("%d",&x);
	for(i=0;i<x;i++)
		scanf("%d",&a[i]);
		
		max=a[0];
	for(i=1;i<x;i++)
		if(a[i]>max)
  		{
  			max=a[i];
  			index=i;	
		}	
			printf("%d %d",max,index);
	return 0;
}
