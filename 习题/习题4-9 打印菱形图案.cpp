#include<stdio.h>

void print(int n);
int main(void)
{
	int n;
	scanf("%d",&n) ;
	
	print(n);
	
	return 0;
 } 
 
/*void print(int n)
{
 	int i,j,k;
 	int temp; 
 	temp=n;
 	for(i=0;i<n;i++)
 	{	
 		if(i<3) 
 		{
// 		print(n-2);	 
		for(k=i+1;k<n;k++)
 			putchar(' ');
	 	for(j=n;j>1;j--) 
 		{
 			printf("* ");
		}
//		temp-=2;
		putchar('\n'); 
		}
		else
		{
			
		 }  
 	} 
 	
 	
} */
void print(int n)
{
	int i,j,k;
	int row=(n/2)+1; 
	for(i=1;i<=row;i++)
	{	
		for(j=2*i-1;j<n;j++)
			printf(" ");
		for(k=0;k<(2*i-1);k++)//重点 
			printf("* ");
		printf("\n"); 
	} 
	for(i=1;i<=n-(row);i++)
	{
		for(j=1;j<2*i+1;j++)//2 4 6
			printf(" ");
		for(k=i*2+1;k<=n;k++)//5 3 1
			printf("* ");
		printf("\n");
	 } 
 } 
 
 /*
 #include<stdio.h>

void print(int n);
int main(void)
{
	int n;
	int i,j,k;
	scanf("%d",&n) ;
	
	
	int row=(n/2)+1; 
	for(i=1;i<=row;i++)
	{	
		for(j=2*i-1;j<n;j++)
			printf(" ");
		for(k=0;k<(2*i-1);k++)//重点 
			printf("* ");
		printf("\n"); 
	} 
	for(i=1;i<=n-(row);i++)
	{
		for(j=1;j<2*i+1;j++)//2 4 6
			printf(" ");
		for(k=i*2+1;k<=n;k++)//5 3 1
			printf("* ");
		printf("\n");
	 } 
	
	return 0;
 }
 */
