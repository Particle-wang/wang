#include<stdio.h>
int main(void)
{
	int hour,minute,second;
	int n;
	scanf("%d:%d:%d",&hour,&minute,&second);
	scanf("%d",&n);
	if(second+n>=60)
	{
		second=second+n-60;
		if(minute==59)
		{
			minute=0;
			if(hour==23)
				hour=0;
			else
				hour++; 
		}
		else
			minute++;
	 } 
	 else
	 	second=second+n;
		
		printf("%02d:%02d:%02d",hour,minute,second);
		
		return 0; 
}
