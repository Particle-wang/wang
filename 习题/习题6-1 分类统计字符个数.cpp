//#include <stdio.h>
//#include <ctype.h>
//#define MAXS 15
//
//void StringCount( char s[] );
//void ReadString( char s[] ); /* 由裁判实现，略去不表 */
//
//int main()
//{
//    char s[MAXS];
//
////    ReadString(s);
//    StringCount(s);
//
//    return 0;
//}
//void StringCount( char s[] )
//{
//	int i;
//	int letter=0;
//	int blank=0;
//	int digit=0;
//	int other=0; 
//	for(i=0;i<MAXS;i++)
//	{
//		if(isalpha(s[i]))
//			letter++;
//		else if(isspace(s[i]))
//			blank++;
//		else if(isdigit(s[i]))
//			digit++;
//		else
//			other++;				
//	}	
//	printf("letter = %d, blank = %d, digit = %d, other = %d"
//	,letter,blank,digit,other);
//	
//} 
void StringCount( char s[] )
{
	int i=0,letter=0,blank=0,digit=0,other=0;
	while(s[i])
	{
		if('a' <= s[i] && s[i] <= 'z' || 'A' <= s[i] && s[i] <= 'Z')
		{
			letter++;
		}
		else if(s[i] == ' ' || s[i] == '\n')
		{
			blank++;
		}
		else if('0' <= s[i] && s[i] <= '9')
		{
			digit++;
		}
		else 
		{
			other++;
		}
		i++;
	}
	printf("letter = %d, blank = %d, digit = %d, other = %d\n",letter,blank,digit,other);
 } 

