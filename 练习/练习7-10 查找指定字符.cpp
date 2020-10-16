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
	int index;
	
	scanf("%c\n",&ch);
	while((a[i]=getchar())!='\n')
	{
		i++;
		count++;
	}
	a[i]='\0';
	
	for(i=0;i<count;i++)
	{
		if(a[i]==ch) 
		{
			index=i; 
			temp=1;
		}
	}
	if(temp==1)
		printf("index = %d",index); 
	else
		printf("Not Found");
	return 0;
	
}
