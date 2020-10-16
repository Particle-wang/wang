#include <stdio.h>
#include<math.h>
/*水仙花数是指一个N位正整数（N≥3），
它的每个位上的数字的N次幂之和等于它本身。
 本题要求编写两个函数，一个判断给定整数是否水仙花数，
另一个按从小到大的顺序打印出给定区间(m,n)内所有的水仙花数。
*/
int narcissistic( int number );
void PrintN( int m, int n );
/*函数narcissistic判断number是否为水仙花数，
是则返回1，否则返回0。

函数PrintN则打印开区间(m, n)内所有的水仙花数，
每个数字占一行。题目保证100≤m≤n≤10000。*/

int main()
{
    int m, n;

    scanf("%d %d", &m, &n);
    if ( narcissistic(m) ) printf("%d is a narcissistic number\n", m);
    PrintN(m, n);
    if ( narcissistic(n) ) printf("%d is a narcissistic number\n", n);

    return 0;
}
int narcissistic( int number )
{
	int a[5];
	int k=number; 
	int i;
	int sum=0; 
	int count =0;
//	int reminder=0;
	int outcome=0;
	while(number>0)
	{
//		reminder=number%10
		a[count]=number%10;
		number=number/10;
		count++;
	}
	for(i=0;i<count;i++)
		sum+=pow(a[i],count);
		
	if	(k==sum)
		outcome=1;
		
	return outcome ; 
//	if(count==3)
//	{
//		int a,b,c;
//		a=number/100;
//		b=number/10%10;
//		c=number%10;
//		if(number==pow(a,count)+pow(b,count)+pow(c,count))
//			outcome=1;
//	 } 
//	 if(count==4)
//	 {
//	 	int a,b,c,d;
//	 	a=number/1000;
//		b=number/100/10%10;
//		c=number/100%10;
//		d=number%10;
//		if(number==pow(a,count)+pow(b,count)+pow(c,count)+pow(d,count))
//			outcome=1;
//	 }
} 
void PrintN( int m, int n )
{
	int i;
	for(i=m;i<=n;i++)
	{if ( narcissistic(i) ) 
		printf("%d\n",i);
	} 
}


