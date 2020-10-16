#include <stdio.h>

char *getmonth( int n );

int main()
{
    int n;
    char *s;

    scanf("%d", &n);
    s = getmonth(n);
    if ( s==NULL ) printf("wrong input!\n");
    else printf("%s\n", s);

    return 0;
}
char *getmonth( int n )
{
	int i;
	char *p=NULL;
	char *a[12]={"January","February","March","April"
	,"May","June","July","August","September"
	,"October","November","December"};

	if(n>=1&&n<=12)
		p=a[n-1];
	
	
	return p;
}

