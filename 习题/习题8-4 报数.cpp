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
//�ȿ�����е�1��out[3-1]=1,˵����3��λ�õ����ǵ�һ���˳��ġ�
//�Դ������ƣ�out[7-1]=2,˵����6��λ�õ����ǵڶ����˳��ġ�
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
