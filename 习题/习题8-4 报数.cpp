#include <stdio.h>
#define MAXN 20

void CountOff( int n, int m, int out[] );

int main()
{
    int out[MAXN], n, m;
    int i;
//	printf("%s\n",__DATE__); 
//	printf("%s\n",__TIME__);  
    scanf("%d %d", &n, &m);
    CountOff( n, m, out );   
    for ( i = 0; i < n; i++ )
        printf("%d ", out[i]);
    printf("\n");

    return 0;
}
//void CountOff( int n, int m, int out[] )
//{
//	int i=0,j=0,k=0,cnt=0,a[MAXN];
// 
//	for(i=0;i<n;i++)
//		a[i] = i+1;
// 
//	i=0;
//	while(cnt < n){
//		if(a[i]!=0)
//			k++;
//		if(k==m){
//			j++;
//			out[i]=j;
//			k=0;
//			cnt++;
//			a[i]=0;
//		}
// 
//		i++;
//		if(i==n)
//			i=0;
//	}
//}
//先看输出中的1在out[3-1]=1,说明第3个位置的人是第一个退出的。
//以此往后推，out[7-1]=2,说明第6个位置的人是第二个退出的。
void CountOff( int n, int m, int out[] )
{
	int i=0,j=0,count=0 ;
	int a[MAXN];
	for(i=0;i<n;i++)
	{
		a[i]=i+1;
	}
	i=0;
	while(count<n)
	{
		if(a[i]!=0)
			j++;
		if(j==m)
		{
			count++;
			out[i]=count;
			j=0;
			a[i]=0;
		}
		i++;
		if (i==n)
			i=0;
	}
	
}
