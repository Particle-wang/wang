#include<stdio.h>
#include<ctype.h>

int main(void)
{
	char ch;
	int i;
	int letter =0; 
	int blank =0 ;
	int  digit =0 ;
	int  other = 0;
	for(i=0;i<10;i++)
	{
		ch=getchar();
		if (isalpha(ch))
		 	letter++;
		else if (isspace(ch))
			blank++;
		else if (isdigit(ch))
			digit++;
		else 
			other++;
	}
		
	printf("letter = %d, blank = %d, digit = %d, other = %d",
	letter,blank,digit,other);
	
	return 0;
 } 
