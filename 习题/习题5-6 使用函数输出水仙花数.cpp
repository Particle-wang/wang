#include <stdio.h>
#include<math.h>
/*ˮ�ɻ�����ָһ��Nλ��������N��3����
����ÿ��λ�ϵ����ֵ�N����֮�͵���������
 ����Ҫ���д����������һ���жϸ��������Ƿ�ˮ�ɻ�����
��һ������С�����˳���ӡ����������(m,n)�����е�ˮ�ɻ�����
*/
int narcissistic( int number );
void PrintN( int m, int n );
/*����narcissistic�ж�number�Ƿ�Ϊˮ�ɻ�����
���򷵻�1�����򷵻�0��

����PrintN���ӡ������(m, n)�����е�ˮ�ɻ�����
ÿ������ռһ�С���Ŀ��֤100��m��n��10000��*/

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


