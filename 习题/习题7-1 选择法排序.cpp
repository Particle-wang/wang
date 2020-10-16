#include<stdio.h>
const int LEN=10; 
int main(void)
{
	int N;
	int a[LEN];
	int i,j;
	int temp;
	
	scanf("%d",&N);
	for(i=0;i<N;i++)
		scanf("%d",&a[i]); 
	for(i=0;i<N;i++)
		for(j=i+1;j<N;j++)
			if(a[i]<a[j])
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
	for(i=0;i<N;i++)
	{ 
		printf("%d",a[i]);
		if(i!=N-1)
			putchar(' '); 
	} 
	return 0;
	
}
