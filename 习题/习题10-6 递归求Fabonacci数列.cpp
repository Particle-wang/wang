#include <stdio.h>

int f( int n );

int main()
{
    int n;

    scanf("%d", &n);
    printf("%d\n", f(n));

    return 0;
}

int f( int n )
{
	if(n>2)
		return f(n-2)+f(n-1);
	else if(n==0)
		return 0;
	else
		return 1;

}
