#include<stdio.h>
#include<ctype.h> 
#define STOP '\n'
const int LEN=80;
int main(void)
{
	char ch;
//	char words[80];
//	gets(words);
//	int count=0;
//	int i; 
	while((ch=getchar())!=STOP)
	{
	
		if(isupper(ch))
		{
			ch='Z'-ch+'A'; 	
			putchar(ch);
		}
		else
			putchar(ch);
			
	}
	
	return 0;
 } 
