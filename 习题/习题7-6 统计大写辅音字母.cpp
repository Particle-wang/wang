#include<stdio.h>
#include<ctype.h> 
#define STOP '\n'
const int LEN=80;
int main(void)
{
	char ch;
	int count=0;
//	int max;//控制最大输出小于80 
	  
	while((ch=getchar())!=STOP)
	{
	
		if(isupper(ch))
		{
			if(ch!='A'&&ch!='E'&&ch!='I'&&ch!='O'&&ch!='U')
				count++;
		}		
	}
	
	printf("%d",count);
	return 0;
 } 
