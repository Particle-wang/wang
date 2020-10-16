#include <stdio.h>

double fact( int n );
double factsum( int n );

int main()
{
    int n;

    scanf("%d",&n);
    printf("fact(%d) = %.0f\n", n, fact(n));
    printf("sum = %.0f\n", factsum(n));
		
    return 0;
}

double fact( int n )
{
	double sum=1;
	
	if(n>0)
	{ 
		sum=n*fact(n-1);
	} 
	return sum;
 } 
double factsum( int n )
{
	double sum=0;
	int i; 
	for(i=1;i<=n;i++)
	{ 
		sum+=fact(i);
	}
	return sum;
}
