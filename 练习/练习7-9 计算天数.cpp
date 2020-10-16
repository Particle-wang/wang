#include<stdio.h>
int main(void)
{
	int year,month,day;
	int sum=0,temp=0;
	int i;
	int ping[12]={31,28,31,30,31,30,31,31,30,31,30,31};
	int run[12]={31,29,31,30,31,30,31,31,30,31,30,31};
	scanf("%d/%d/%d",&year,&month,&day);
	
	if((year%4==0&&year%100!=0)||year%400==0)//ÈòÄê
	{
		for(i=1;i<month;i++)
			temp+=run[i];
		sum=temp+day;
	}
	else
	{
		for(i=1;i<month;i++)
			temp+=ping[i];
		sum=temp+day;
	}
	printf("%d",sum);
	
	return 0;
	
}
