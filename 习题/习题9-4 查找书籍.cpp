#include<stdio.h>
#include<string.h>
char *s_gets(char *st,int n);
#define MAXTITL 31
#define LEN 9
struct book{
	char title[MAXTITL];
	double value; 
};

int main(void)
{
	int N;
	int i=0;
	int x=0,y=0;
	char *find;
	char c;
	double min,max;
	
//	puts("ENTER n");
	scanf("%d",&N);
	struct book a[LEN];
//	puts("ENTER title");
	while(getchar()!='\n')
 		continue;
	
	while(i<N && s_gets(a[i].title,MAXTITL)!=NULL
	&& a[i].title[0]!='\0')
//	for(i=0;i<N;i++)
	{
//		scanf("%c",&c);//¶ÁÈë»º³åÇøµÄ"\n"
//        gets(a[i].title);
		scanf("%lf",&a[i++].value);
		while(getchar()!='\n')
 			continue;
	}
	min=a[0].value;
	for(i=1;i<N;i++)
	{
		if(a[i].value<min)
		{
			min=a[i].value;
			x=i;
		}
	}
	max=a[0].value;
	for(i=1;i<N;i++)
	{
		if(a[i].value>max)
		{
			max=a[i].value;
			y=i;
		}
	}
	printf("%.2lf, %s\n",max,a[y].title);                                                                                                                                                                                                                                                                                                                                                                                                                                   
	printf("%.2lf, %s\n",min,a[x].title);
	
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
