#include <stdio.h>

int fn( int a, int n );
int SumA( int a, int n );
	
int main()
{
    int a, n;

    scanf("%d %d", &a, &n);
    printf("fn(%d, %d) = %d\n", a, n, fn(a,n));		
    printf("s = %d\n", SumA(a,n));	
	
    return 0;
}

int fn( int a, int n )
{
	int i;
	int out;
	int temp=a;
	for(i=0;i<n;i++)
	{
		out =a;
		a=a *10+temp;
	}
	return out;
}
int SumA( int a, int n )
{
	int i;
	int sum=0;
	int out;
	int temp=a;
	for(i=0;i<n;i++)
	{
		out =a;
		sum+=out;
		a=a*10+temp;
	}
	return sum;
}

