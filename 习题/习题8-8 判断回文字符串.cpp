#include <stdio.h>
#include <string.h>

#define MAXN 20
typedef enum {false, true} bool;

bool palindrome( char *s );

int main()
{0
    char s[MAXN];

    scanf("%s", s);
    if ( palindrome(s)==true )
        printf("Yes\n");
    else
        printf("No\n");
    printf("%s\n", s);

    return 0;
}
bool palindrome( char *s )
{
	int i;
	int temp=1;
	int l=strlen(s);
	for(i=0;i<l/2;i++)
	{
		if(s[i]==s[l-i-1])
			continue;
		else
			temp=0;
	}
	if(temp==1)
		return true;
	else 
		return false;
}
//bool palindrome( char *s ){
//	for(int i=0;i<strlen(s)/2;i++){
//		if(s[i]!=s[strlen(s)-1-i])
//			return false;
//	}
//	return true;
//}
