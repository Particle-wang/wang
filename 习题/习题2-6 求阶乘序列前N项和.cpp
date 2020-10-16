#include<stdio.h>
#include<math.h>
int jiecehng(int N); 
int main(void)
{
	int N;
	int sum;
	scanf("%d",&N);
	sum=jiecehng(N);
	printf("%d",sum);
	return 0;
 } 
int jiecehng(int N)
{
	int i;
	int mid=1;
	int sum=0;
	for(i=1;i<=N;i++)
	{
		mid*=i;
		sum+=mid;
	}
		return sum; 
}
