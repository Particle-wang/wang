#include <stdio.h>
#include <string.h>

#define MAXS 10

void Shift( char s[] );

void GetString( char s[] ); /* 实现细节在此不表 */

int main()
{
    char s[MAXS];

//    GetString(s);
	scanf("%s",s);
    Shift(s);
    printf("%s\n", s);
	
    return 0; 
}

#include<string.h>
void Shift( char s[] )
{
	int i;
	int l=strlen(s);
	char a[l];
	
	a[l-3]=s[0];
	a[l-2]=s[1];
	a[l-1]=s[2];
	for(i=0;i<l-3;i++)
		a[i]=s[i+3];
	
	for(i=0;i<l;i++)
		s[i]=a[i];
	
 } 
