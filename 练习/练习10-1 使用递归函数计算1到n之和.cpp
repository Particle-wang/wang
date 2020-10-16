#include <stdio.h>

int sum( int n );

int main()
{
    int n;

    scanf("%d", &n);
    printf ("%d\n", sum(n));

    return 0;
}
int sum( int n )
{
	int out=0; 
	if(n>0)
		out=n+sum(n-1);
	return out; 
}
