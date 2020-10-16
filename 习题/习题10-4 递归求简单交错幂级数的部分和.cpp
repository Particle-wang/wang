#include <stdio.h>

double fn( double x, int n );

int main()
{
    double x;
    int n;

    scanf("%lf %d", &x, &n);
    printf("%.2f\n", fn(x,n));

    return 0;
}
//#include<math.h>
//double fn( double x, int n )
//{
//	double result;
//	int i=-1;
//	
//	if(n>2) 
//		result=i*fn(i,n-2)*x*fn(x,n-1);
//	else
//		result=x; 
//		 
//	return result;
//}
#include<math.h>
double fn( double x, int n )
{
	double sum;
  if(n==1)
    sum=x;
  else
  {
  	sum=pow(-1,n-1)*pow(x,n)+fn(x,n-1);
  }
  return sum;
}

 
