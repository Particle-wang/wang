#include<stdio.h>
#include<math.h>
#define mileage_limit1 3 
#define s_money1 10 
#define money2 2 
#define money3 3
#define mileage_limit2 10
#define wait_time 5
#define wait_money 2
int main(void)
{
	double mileage ;
	int time;
	double money=0;
	scanf("%lf %d",&mileage ,&time);
	if	(mileage<=mileage_limit1)
		money=s_money1;
	else if(mileage<=mileage_limit2)
		money=s_money1+(mileage-mileage_limit1)*money2;
	else 
        money=s_money1+(mileage-mileage_limit2)*money3
		+(mileage_limit2-mileage_limit1)*money2;
		
	if (time>=wait_time)
		money+=time/wait_time*wait_money;
		
	printf("%d",(int)(round(money))) ;
	
	return 0;
 } 
