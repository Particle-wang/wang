#include <stdio.h>

void printdigits( int n );

int main()
{
    int n;
	
    scanf("%d", &n);
    printdigits(n);

    return 0;
}
void printdigits( int n )
{
	int y;
	
	y=n%10;
	if(n>10)
		printdigits(n/10);

	printf("%d\n",y);
}
