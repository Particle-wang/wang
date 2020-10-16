#include<stdio.h>
#include<string.h>
const int LEN=80;
const int LIM=5;
//void strst(char *string[]int num);
int main(void)
{
	char a[LIM][LEN];
	char temp[LEN];
//	char *p[LIM]; 
	int i;
	int top,seek;
	for(i=0;i<LIM;i++)
	{
		scanf("%s",&a[i]);
//		p[LIM]=a[i];
	}
//	strst(p,LIM);
	for(top=0;top<LIM-1;top++)
		for(seek=top+1;seek<LIM;seek++)
			if(strcmp(a[top],a[seek])>0)
			{
				strcpy(temp,a[top]);
				strcpy(a[top],a[seek]);
				strcpy(a[seek],temp);
			}
	puts("After sorted:");
	for(i=0;i<LIM;i++)
		puts(a[i]);
//		puts(p[i]);
	return 0;
}
//void strst(char *string[],int num)
//{
//	char *temp;
//	int top,seek;
//	for(top=0;top<num-1;top++)
//		for(seek=top+1;seek<num;seek++)
//			if(strcmp(string[top],string[seek])>0)
//			{
//				temp=string[top];
//				string[top]string[seek];
//				string[seek]=temp;
//			}
//		
//}
