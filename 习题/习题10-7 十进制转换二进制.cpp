#include <stdio.h>

void dectobin( int n );

int main()
{
    int n;

    scanf("%d", &n);
    dectobin(n);

    return 0;
}
void dectobin( int n )
{
	int y;
	y=n%2;
	if(n>=2)
		dectobin(n/2);
	printf("%d",y);
}
