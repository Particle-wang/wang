#include<stdio.h>
const int LEN=6;
int main(void)
{
	int n;//�������� 
	int m; //ѭ���ƶ�λ�� 
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
    m=m%n;  //���ܻ����m��n��������ȡ����   
    for(i=0;i<n;i++){  
        for(j=n-m;j<n;j++)   //����� ���ƵĲ���   
            printf("%d ",a[i][j]);  
        for(j=0;j<n-m;j++)   //���ʣ�µĲ���   
            printf("%d ",a[i][j]);  
        printf("\n");  
    }         
    return 0;   
}*/
