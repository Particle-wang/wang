#include <stdio.h>

int factorsum( int number );
void PrintPN( int m, int n );
	
int main()
{
    int m, n;

    scanf("%d %d", &m, &n);
    if ( factorsum(m) == m ) printf("%d is a perfect number\n", m);
    if ( factorsum(n) == n ) printf("%d is a perfect number\n", n);
    PrintPN(m, n);

    return 0;
}
int factorsum( int number )
{
	int sum=0;
	int temp=0;
	int i;
	int a[100];
	for(i=1;i<number;i++)
	{
		if(number%i==0)
		{
			a[temp]=i;
			temp++;
		}
	}
	for(i=0;i<temp;i++)
		sum+=a[i];
	
	if(sum==number)
		return sum;
	
}
void PrintPN( int m, int n )
{
	int i,k;
	int temp=0;
	int a[100];
	for(i=m;i<=n;i++)
		if(factorsum(i)==i)
		{
			temp=0; 
			printf("%d =",i);
			for(k=1;k<i;k++)
			{
				if(i%k==0)
				{
					temp++;
					if(temp==1)
						printf(" %d",k);	
					else
						printf(" + %d",k);
				}
			}
			puts("");
		}
		
	if(!temp)
		printf("No perfect number"); 
}

