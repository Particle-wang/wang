#include<stdio.h>
#include<ctype.h>
const int LEN=10;
int main(void)
{
	char ch='0';
	int a,b;
	int sum=1;
//	int a[LEN]; 
	int i;
	scanf("%d",&a);
	while(scanf("%c",&ch)&&ch!='=')
	{
		if(ch=='+'||ch=='-'||ch=='*'||ch=='/')
		{
			scanf("%d",&b);
			switch(ch)
			{
				case '+':a=(a+b);
						 break;
				case '-':a=(a-b);
						 break;
				case '*':a=(a*b);
				   		 break;
				case '/':if(b==0)
							{
								sum=0;
								break;
							}
						else	
							a=(a/b);break;
						
			}
		}
		else
			{
				sum=0;
				break;
			}
	}
	if(sum==1)	
		printf("%d",a);
	else
		printf("ERROR");
	return 0;
} 
