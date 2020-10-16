#include <stdio.h>

int Ack( int m, int n );

int main()
{
    int m, n;

    scanf("%d %d", &m, &n);
    printf("%d\n", Ack(m, n));

    return 0;
}
int Ack( int m, int n )
{
	double result;
	if(m>0&&n==0)
		result=Ack(m-1,1);
	else if(m>0&&n>0)
		result=Ack(m-1,Ack(m,n-1));
	else
		result=n+1;
	
	return result;
		
}
