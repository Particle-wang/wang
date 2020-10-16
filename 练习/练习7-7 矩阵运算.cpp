#include<stdio.h>
const int LEN=10;
int main(void)
{
	int N;
	int i,j,k,l;
	int sum=0; 
	int temp=0;
	int a[LEN][LEN];
	scanf("%d",&N);
	for(i=0;i<N;i++)
		for(j=0;j<N;j++)
			scanf("%d",&a[i][j]);
	for(i=0;i<N-1;i++)
		for(j=0;j<N-1;j++)
			sum+=a[i][j];
	for(i=N-2,j=1;i>0;i--,j++)
		temp+=a[i][j];
	printf("%d",sum-temp);
	
	return 0;
} 
