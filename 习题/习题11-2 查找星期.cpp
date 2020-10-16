#include <stdio.h>
#include <string.h>

#define MAXS 80

int getindex( char *s );

int main()
{
    int n;
    char s[MAXS];

    scanf("%s", s);
    n = getindex(s);
    if ( n==-1 ) printf("wrong input!\n");
    else printf("%d\n", n);

    return 0;
}
#include<string.h>
int getindex( char *s )
{
	int x=-1;
	int i;
	char *a[7]={"Sunday","Monday","Tuesday",
	"Wednesday","Thursday","Friday","Saturday"};
	for(i=0;i<7;i++)
	{
		if(!strcmp(s,a[i]))
		{
			x=i;
			break;
		}
	}
	return x;
}
