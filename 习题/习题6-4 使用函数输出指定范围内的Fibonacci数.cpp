#include <stdio.h>

int fib( int n );
void PrintFN( int m, int n );
	
int main()
{
    int m, n, t;

    scanf("%d %d %d", &m, &n, &t);
    printf("fib(%d) = %d\n", t, fib(t));
    PrintFN(m, n);

    return 0;
}

int fib( int n )
{
	int i;
	int a[1000];
	a[1]=1;
	a[2]=1;
	for(i=3;i<=n;i++)
		a[i]=a[i-1]+a[i-2];
		
	return a[n];
}
void PrintFN( int m, int n )
{
	int i;
	int find=0;
	for(i=1;;i++)
	{
		if(fib(i)>=m&&fib(i)<=n)
		{
			find++;
			if(find==1)
				printf("%d",fib(i));
			else
				printf(" %d",fib(i));
		}
		else if(fib(i)>n)
			break;
		else continue;
   	}
   	if(!find)
   		printf("No Fibonacci number");
}

