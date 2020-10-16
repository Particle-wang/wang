#include <stdio.h>

#define MAXS 10

char *match( char *s, char ch1, char ch2 );

int main()
{
    char str[MAXS], ch_start, ch_end, *p;

    scanf("%s\n", str);
    scanf("%c %c", &ch_start, &ch_end);
    p = match(str, ch_start, ch_end);
    printf("%s\n", p);

    return 0;
}
//#include<string.h>
//char *match( char *s, char ch1, char ch2 )
//{
//	int i;
//	int l=strlen(s);
////	char *pr[2];
////	char pr[l];
////	int l1=strlen(pr);
////	char pr1[l1];
////	const char *p1;
//	int  temp,temp1,temp2;
//	char *pr;	
//		
//	for(i=0;i<l;i++)
//		if(s[i]==ch1)
//		{
//			temp=i;
//			temp1=temp;
//			break;
//		}
////	for(i=0;temp<l;i++,temp++)
////		pr[i]=s[temp];
//
////	for(i=0;i<l1;i++)
////		pr1[i]=pr[i];//备份pr最后return；得到第二行 
//		
//	for(i=0;i<l;i++)
//		if(s[i]==ch2)
//		{
//			temp2=i;
//			s[i+1]='\0';
//			break;
//		}
//	pr=&s[temp];
////	pr[temp2-temp1+1]='\0';
//	printf("%s",pr);
//	putchar('\n');
//	
//	return s+;
//}

#include<string.h>
char *match( char *s, char ch1, char ch2 ) 
{ 	
	int i;
	char *rtn; 
	for(i=0;(i<strlen(s))&&(s[i]!=ch1);i++); 
		rtn=&s[i]; 
	for(i;i<strlen(s);i++) 
	{ 
	  printf("%c",s[i]); 
	  if(s[i]==ch2)
	  break; 
	} 
	printf("\n"); 
	return rtn;
}

