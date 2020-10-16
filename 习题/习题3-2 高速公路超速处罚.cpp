#include<stdio.h>

int main(void)
{
	int speed;
	int speed_limit;
	double exceed1=0;
	scanf("%d %d",&speed,&speed_limit);
	if (speed<(int)(speed_limit*1.1)&&speed>=speed_limit)
		printf("OK");
	else if(speed<(speed_limit*1.5))
	{
	 	exceed1=((speed-speed_limit)*1.0)/speed_limit*100 ;
	 	printf("Exceed %.f%%. Ticket 200",exceed1);
	}
	else
	{
		exceed1=((speed-speed_limit)*1.0)/speed_limit*100 ;
	 	printf("Exceed %.f%%. License Revoked",exceed1);
	}
	
	return 0;
} 
