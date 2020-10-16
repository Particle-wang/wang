#include<stdio.h>
#include<string.h> 
const int LEN=80;
int main(void)
{
	char ch;
	char a[LEN];
	int i=0;
	int temp=0;
	int count=0;
	while((a[i]=getchar())!='\n')
	{
		i++;
		count++;
	} 
	a[count]='\0';
	for(i=count-1;i>=0;i--)
	{
		printf("%c",a[i]);
	 } 


	return 0;
	
}
