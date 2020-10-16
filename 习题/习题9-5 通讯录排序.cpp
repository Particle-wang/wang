#include<stdio.h>
#include<string.h>
#define NAMEMAX 11
#define TELEMAX 18
#define LEN 9
char *s_gets(char *st ,int n);
struct connextion{
	char name[NAMEMAX];
	int birthday;
	char tele[TELEMAX];
};
int main(void)
{
	int N;
	int i,j;
//	int temp;
	scanf("%d",&N);
	while(getchar()!='\n')
		continue;
	struct connextion a[LEN];
	struct connextion temp;
	for(i=0;i<N;i++)
	{
		scanf("%s",&a[i].name );
		scanf("%d",&a[i].birthday);
		scanf("%s",&a[i].tele);	
	 } 
//	while(i<N && s_gets(a[i].name,NAMEMAX)!=NULL 
//	&& a[i].name[0]!='\0')
//	{
//		scanf("%d",&a[i].birthday);
//		while(getchar()!='\n')
//			continue;
//		s_gets(a[i].tele,TELEMAX);
//
//		i++;
//	}
	for(i=0;i<N-1;i++)
		for(j=i+1;j<N;j++)
	{
		if(a[j].birthday<a[i].birthday)
		{
			temp=a[i];
			a[i]=a[j];
			a[j]=temp;
		}
	}
	for(i=0;i<N;i++)
		printf("%s %d %s\n",a[i].name
		,a[i].birthday,a[i].tele);
		
	return 0;
 } 
char *s_gets(char *st,int n)
{
	char *ret_val;
	char *find;
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
