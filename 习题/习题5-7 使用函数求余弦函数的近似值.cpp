#include <stdio.h>
#include <math.h>

double funcos( double e, double x );

int main()
{    
    double e, x;

    scanf("%lf %lf", &e, &x);
    printf("cos(%.2f) = %.6f\n", x, funcos(e, x));

    return 0;
}
//double funcos( double e, double x )
//{
//	int count=0;
//	int i;
//	double sum;
//	int ans=1;
//	int abs=1;
//	int n; 
//	count=0; 
//	while(1)
//	{	 
//		for(i=1;i<=count;i++)
//		{
//			ans*=i ;
//		}
//		sum+=pow(x,count)/ans*abs;
//		n=pow(x,count)/ans*abs;
//		abs*=-1;
//		count+=2;
//		if(fabs(n)>e)
//			return sum; 
//	}
//	
//} 
double funcos( double e, double x ){
	int flag=-1;
	double item=1,m=2,sum=1;
	double fenmu=1, fenzi;
	
	while(item>e){
		for(int i=1;i<=m;i++){
			fenmu=fenmu*i;
		}	 
		fenzi=pow(x,m);
		item=fenzi/fenmu;
		sum=sum+flag*item;
		m=m+2;
		fenmu=1;
		flag=-flag;
	}	
	return sum;	
}
