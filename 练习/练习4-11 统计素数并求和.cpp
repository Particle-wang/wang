#include <stdio.h>

int isprime(int p);
int main(void)
{
	int m;
	int n;
	int i;
	int sum=0;
	int count=0;
	scanf("%d %d",&m,&n);
	if(m<=n&&m>=1&&n<=500)
	{
		for(i=m;i<=n;i++)
			if(isprime(i))
			{
				sum+=i;
				count++;
			}
		printf("%d %d",count,sum);
	}
	return 0;
}
int isprime(int p)
{
	int yes;
	int i;
	if(p>2)
	{
		for(i=2;i<p;i++)
		{
			if((p%i)==0)
				return 0;
			else
				yes=1;
		}
	}
	else if(p==2)
		return 1;
	else
		return 0;
		
	return yes;
}
