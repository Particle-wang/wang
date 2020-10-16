#include <stdio.h>
#include<ctype.h>
#include<string.h>
#define MAXS 15

void StringCount( char *s );
void ReadString( char *s ); /* 由裁判实现，略去不表 */
//char *s_gets(char *st ,int n);
int main()
{
    char s[MAXS];

//	s_gets(s , MAXS);
//    ReadString(s);
	int i;
	for(i=0;i<15;i++)
	{
		s[i]=getchar();
	 } 
	
	 
    StringCount(s);
	
    return 0;
}
void StringCount( char *s )
{
	int i;
	int l=strlen(s);
	int upper=0,lower=0,blank=0,digit=0,other=0;
	int temp=0;
	for(i=0;i<l;i++)
	{
		if(isupper(s[i]))
			upper++;
		else if(islower(s[i]))
			lower++;
		else if(isdigit(s[i]))
			digit++;
		else if((s[i])==' ')
			blank++;
		else 
			other++;
	}
	printf("%d %d %d %d %d",
	upper,lower,blank,digit,other);
}
//char *s_gets(char *st ,int n)
// {
// 	char *ret_val;
// 	char*find;
// 	ret_val=fgets(st,n,stdin);
// 	if(ret_val)
// 	{
// 		find=strchr(st,'\n');
//		if(find)
//			*find='\0';
//		else
//			while(getchar()!='\n')
//				continue; 
//	 }
//	 return ret_val;
// }
