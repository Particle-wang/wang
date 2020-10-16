#include <stdio.h>
#define MAXN 10

int reverse( int number );

int main()
{
    int n;

    scanf("%d", &n);
    printf("%d\n", reverse(n));

    return 0;
}
#include<math.h>
int reverse( int number )
{
	int i=0;
	int result=0;
	int temp1,temp2=number;
	int a[MAXN];
	
	number=fabs(number);
	while(number>0)
	{
		if(i==0&&number%10==0)
		{	
			number/=10;
			continue;
		}
		a[i]=number%10;
		number/=10;
		i++;
	}
	temp1=i;
	for(i=0;i<temp1;i++)
		result+=a[i]*pow(10,temp1-i-1);
	
	if(temp2>0)
		return result;
	else
		return -result;
 } 
