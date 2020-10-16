#include<stdio.h>
#include<ctype.h>

int main(void)
{
	int years;
	int i;
	int count=0;
	scanf("%d",&years);
	if(years>2100||years<2001)
		printf("Invalid year!");
	else
		{	
			for(i=2001;i<=years;i++)
			{
			if((i%4==0&&i%100!=0)||i%400==0)
			{
				printf("%d\n",i);
				count++;
			}
			}
			if(count==0)
				printf("None");
		}
		
	return 0;
 } 
