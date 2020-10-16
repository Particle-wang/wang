#include<stdio.h>
#include<ctype.h>

int main(void)
{
	int result;
	char ch;
	scanf("%d",&result);
	if (result>=90)
		ch='A';
	else if (result>=80)
		ch='B';
	else if (result>=70)
		ch='C';
	else if (result>=60)
		ch='D';
	else
		ch='E';
	printf("%c",ch);
		
		
	return 0;
 } 
