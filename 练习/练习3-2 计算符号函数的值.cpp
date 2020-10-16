#include<stdio.h>

int main(void)
{
	int n;
	int outcome; 
	scanf("%d",&n);
	if (n>0)
		outcome= 1;
	else if(n==0)
		outcome=0;
	else
		outcome=-1;
	
	printf("sign(%d) = %d",n,outcome);
	
	return 0; 
 } 
