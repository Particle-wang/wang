#include<stdio.h>
int main(void)
{
	int Random;
	int N;//猜测的最大次数
	scanf("%d %d",&Random,&N);
	int x;
	scanf("%d",&x);
	int count=1;
	while(count<N)
	{
		if(x<0)
		{ 
			printf("Game Over\n") ; 
			break;
		}
		if(x<Random)
			printf("Too small\n");
		else if(x>Random)
			printf("Too big\n");
			 
			
		if(x==Random&&count==1)
			printf("Bingo!\n");
		else if((x==Random&&count<=3))
			printf("Lucky You!\n");
		else if((x==Random&&count>3&&count<=N))
			printf("Good Guess!\n");
			
		 scanf("%d",&x);
		 count++;
	 } 
	 if(count>=N)
		{
			printf("Game Over"); 
		} 	
		
	return 0;
} 

