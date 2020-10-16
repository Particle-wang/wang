#include <stdio.h>

int max( int a, int b );

int main()
{    
    int a, b;

    scanf("%d %d", &a, &b);
    printf("max = %d\n", max(a, b));

    return 0;
}

int max(int a,int b)
{
	int y;
	y=a;
	if (b>a)
		y=b;
		
	return y;
 } 
