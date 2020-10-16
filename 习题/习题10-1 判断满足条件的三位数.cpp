#include <stdio.h>
#include <math.h>

int search( int n );

int main()
{
    int number;

    scanf("%d",&number);
    printf("count=%d\n",search(number));
		
    return 0;
}
/*   第一种 
int search( int n )
{
	int i;
	int count=0 ;
	int temp1,temp2,temp3;
	for(i=11;pow(i,2)<n;i++)
	{
		temp1=pow(i,2)/100;
		temp2=(int)(pow(i,2)/10)%10; 
		temp3=(int)pow(i,2)%10;
		if(temp1==temp2||temp1==temp3||temp2==temp3)
			count++; 
	}
	return count ;
 } 
 */
 
 //第二种 
 int search( int n )
{
	int i;
	int count=0 ;
	int a[3]; 
//	int temp1,temp2,temp3;
	int k,j=0;
	for(i=11;pow(i,2)<n;i++)
	{
		k=pow(i,2);
		j=0;
		while(k>0)
		{
			a[j++]=k%10;
			k/=10; 
		} 
		if(a[0]==a[1]||a[0]==a[2]||a[1]==a[2])
			count++;
	}
	return count ;
 } 
 
