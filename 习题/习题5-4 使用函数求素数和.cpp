#include <stdio.h>
#include <math.h>

int prime( int p );
int PrimeSum( int m, int n );

int main()
{
    int m, n, p;

    scanf("%d %d", &m, &n);
    printf("Sum of ( ");
    for( p=m; p<=n; p++ ) {
        if( prime(p) != 0 )
            printf("%d ", p);
    }
    printf(") = %d\n", PrimeSum(m, n));

    return 0;
}
int prime(int p)
{
	int is_prime=0;//素数用1，非素数用0 
	int i;
	if (p>2)
	{ 
		for(i=2;p>i;i++)
		{ 
		if((p%i)==0)
		{	
			 is_prime= 0;
			break;
		}
		else
			is_prime=1;
		} 
	} 
	else if (p==2)
		is_prime=1;
	else 
		is_prime=0; 
	
	return is_prime;
} 

int PrimeSum( int m, int n )
{	
	int sum =0;
	int p;
	for( p=m; p<=n; p++ ) 
	{
        if( prime(p) != 0 )
			sum+=p;
	}
	return sum;
	 
}


