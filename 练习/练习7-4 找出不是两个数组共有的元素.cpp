#include<stdio.h>
#define LEN 30
int main(void)
{
	int N1,N2;
	int i,j;
	int k=0,l=0;
	int temp=0;
	int a[LEN];
	int b[LEN];
	int c[LEN]; 
//	int d[LEN];
	
	scanf("%d",&N1);
	for(i=0;i<N1;i++)
		scanf("%d",&a[i]);
	scanf("%d",&N2);
	for(j=0;j<N2;j++)
		scanf("%d",&b[j]);
		
	for(i=0;i<N1;i++)
	{
		temp=0; 
		for(j=0;j<N2;j++)
			if(a[i]==b[j])
			{
				temp =1;
				break; 
			}
		if(temp==0)
		{
			c[k]=a[i];
			k++;
		}
	}
		
	for(i=0;i<N2;i++)
	{
		temp=0; 
		for(j=0;j<N1;j++)
			if(b[i]==a[j])
			{
				temp =1;
				break; 
			}
		if(temp==0)
		{
			c[k]=b[i];
			k++;
		}
	}
	
	
	printf("%d", c[0]);
	for(i=1; i<k; i++)
	{ 
		temp=0; 
		for(j=0; j<i; j++)
			if(c[i]==c[j])
			{ 
				temp=1 ;
				break;
			}
		if(temp==0)
		{
			printf(" %d",c[i]);	
		}		
	}	
//	for(i=0;i<k;i++)
//		printf("%d ",c[i]); //test 
//	printf("%d",a[0]); 

//	for(i=0;i<k-1;i++)
//	{
//		temp=0;
//		for(j=i+1;j<k;j++)
//		{
//			if(a[i]==a[j])
//			{
//				temp=1;
//				break;
//				}	
//			if(temp==0)
//			{
//				printf(" %d",a[i]);
//			}	 
//		}	
//	}

	
	
	
//	printf("%d",c[0]);                  
//    for(i=1;i<k;i++)
//	{
//        for(j=0;j<i;j++)
//		{
//            if(c[i]==c[j])
//			{
//				temp=1;
//                break;
//            }
//        }
//        if(temp ==0)
//		{
//            printf("  %d",c[i]);
//        }
//    }  
//	
	
	
	                    
//	for(i=0;i<k;i++)
//	{
//		for(j=0;j<k;j++)
//		if(c[i]==c[j])
//		{
//			temp =1;
//			break;
//		}
//		if(temp==0)
//		{
//			d[l]=c[i];
//			l++;
//		}
//	}
//
//	for(i=0;i<l;i++)	
//		printf("%d ",d[i]);
	
	
	return 0;
}  
//#include<stdio.h>
//int main()
//{
//	int a[20], b[20], c[20];
//	int m, n, i, j, k=0;
//	scanf("%d", &m);
//	for(i=0; i<m; i++)
//		scanf("%d", &a[i]);
//	scanf("%d", &n);
//	for(i=0; i<n; i++)
//		scanf("%d", &b[i]);
//	for(i=0; i<m; i++){
//		for(j=0; j<n; j++){
//			if(a[i]==b[j])
//				break;
//		}
//		if(j>=n){
//			c[k]=a[i];
//			k++;
//		}
//	}
//	for(i=0; i<n; i++){
//		for(j=0; j<m; j++){
//			if(b[i]==a[j])
//				break;
//			}
//		if(j>=m){
//			c[k]=b[i];
//			k++;
//		}
//	}
//	printf("%d", c[0]);
//	for(i=1; i<k; i++){
//	 	for(j=0; j<i; j++){
//			if(c[i]==c[j])
//				break;
//		}
//		if(j>=i)
//			printf(" %d", c[i]);
//	}
//	return 0;	
//}
