#include<stdio.h>
#include<ctype.h>
int main(void)
{
	char ch;
	int count=0;
	int i=0;
	while((ch=getchar())!='\n')
	{
		if(!isspace(ch)&&!i)
		{
			i=1;
			count++;
		}
		if(isspace(ch)&&i)
		{
			i=0;
		}
	}
	printf("%d",count);
	
	return 0;
}
