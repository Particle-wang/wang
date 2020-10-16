#include <stdio.h>
#include<string.h>
#define MAXN 20

void strmcpy( char *t, int m, char *s );
void ReadString( char s[] ); /* 由裁判实现，略去不表 */
char *s_gets(char *st ,int n);
int main()
{
    char t[MAXN], s[MAXN];
    int m;
    scanf("%d\n", &m);
    s_gets(t,MAXN);
    strmcpy( t, m, s );
    printf("%s\n", s);

    return 0;
}
void strmcpy( char *t, int m, char *s )
{
	int i=m-1,j=0;	
	int l=strlen(t);	
		while(i<=l)
		{
			s[j]=t[i];
			j++;
			i++;
		}
 } 
 char *s_gets(char *st ,int n)
 {
 	char *ret_val;
 	char*find;
 	ret_val=fgets(st,n,stdin);
 	if(ret_val)
 	{
 		find=strchr(st,'\n');
		if(find)
			*find='\0';
		else
			while(getchar()!='\n')
				continue; 
	 }
	 return ret_val;
 }
