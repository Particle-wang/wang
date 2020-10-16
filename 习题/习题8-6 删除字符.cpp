#include <stdio.h>
#include<string.h>
#define MAXN 20

void delchar( char *str, char c );
void ReadString( char s[] ); /* 由裁判实现，略去不表 */
char *s_gets(char *st ,int n);
int main()
{
    char str[MAXN], c;

    scanf("%c\n", &c);
//    ReadString(str);
	s_gets(str,MAXN);
    delchar(str, c);
    printf("%s\n", str);

    return 0;
}
void delchar( char *str, char c )
{
	int i=0,j=0;
	int l=strlen(str);
	for(i=0;i<=l;i++)
	{
		if(c==str[i])
		{
			for(j=i;j<=l;j++)
				str[j]=str[j+1];
			i--;
		}
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
