#include<stdio.h>
const int LEN=6;
int main(void)
{
	int n;//矩阵行列 
	int m; //循环移动位数 
	int i,j,k,l;
	int a[LEN][LEN];
	scanf("%d %d",&m,&n); 
	for(i=0;i<n;i++)
		for(j=0;j<n;j++)
			scanf("%d",&a[i][j]);
	m=m%n;
	for(i=0;i<n;i++)
	{
		for(j=n-m;j<n;j++)
			printf("%d ",a[i][j]);
		for(j=0;j<n-m;j++)
			printf("%d ",a[i][j]);
			
		printf("\n");
	}
//		for(j=0,k=n-m;k!=0;j++,k++)
//			printf("%d",a[i][k]);
//		for(j=0,k=0;j<n;j++,k--)
//			printf("%d",a[i][k]);
//	}
//	for(i=0;i<n;i++)
//	{
//		for(k=0;k<n;k++)
//			printf("%d ",a[i][k]); 
//		putchar('\n');
//	}
	return 0;
} 

/*
#include<stdio.h>  
int main(void){  
    int a[10][10],i,j,n,m;  
    scanf("%d %d",&m,&n);  
    for(i=0;i<n;i++)  
        for(j=0;j<n;j++)  
            scanf("%d",&a[i][j]);  
    m=m%n;  //可能会出现m比n还大所以取余数   
    for(i=0;i<n;i++){  
        for(j=n-m;j<n;j++)   //先输出 右移的部分   
            printf("%d ",a[i][j]);  
        for(j=0;j<n-m;j++)   //输出剩下的部分   
            printf("%d ",a[i][j]);  
        printf("\n");  
    }         
    return 0;   
}*/
