#include<stdio.h>
#include<math.h>
int main(void)
{
	double x1,x2,x3,y1,y2,y3;
	double L=0;//周长
	double A=0;//面积
	double temp;
	double p=0.0; 
	double line1=0.0,line2=0.0,line3=0.0;
	scanf("%lf %lf %lf %lf %lf %lf",&x1,&y1,&x2,&y2,&x3,&y3);
	line1=sqrt(pow(abs(x1-x2),2)+pow(abs(y1-y2),2)); 
	line2=sqrt(pow(abs(x1-x3),2)+pow(abs(y1-y3),2)); 
	line3=sqrt(pow(abs(x3-x2),2)+pow(abs(y3-y2),2)); 
	
	if(line1>line2)
		line1=line1;
	else
	{
		temp=line1;
		line1=line2;
		line2=temp;
	}
	if(line1>line3)
		line1=line1;
	else
	{
		temp=line1;
		line1=line3;
		line3=temp;
	}
	if(line2>line3)
		line2=line2;
	else
	{
		temp=line2;
		line2=line3;
		line3=temp;
	}
	L=line1+line2+line3;
	p=(line1+line2+line3)/2;
	A=sqrt(p*(p-line1)*(p-line2)*(p-line3)); 
//	A=1.0/4*sqrt((line1+line2+line3)*(line1+line2-line3)
//	*(line1+line3-line2)*(line2+line3-line1)) ;
	if((line2+line3)>line1)
		printf("L = %.2f, A = %.2f",L,A); 
		
	else
		printf("Impossible"); 
	
	 
	return 0; 
 } 
 /*
 #include<stdio.h>
#include<math.h>

int main()
{
	double x1,x2,x3,y1,y2,y3;
	scanf("%lf %lf %lf %lf %lf %lf",&x1,&y1,&x2,&y2,&x3,&y3);
	double l,a,side1,side2,side3;
	
	side1=sqrt(pow((x1-x2),2)+pow((y1-y2),2));
	side2=sqrt(pow((x1-x3),2)+pow((y1-y3),2));
	side3=sqrt(pow((x2-x3),2)+pow((y2-y3),2));
	//随意一条边，大于另两条的差，小于另两条的和
	if((side1+side2)<=side3||(side1+side3)<=side2||(side3+side2)<=side1)
	{
		printf("Impossible");	
	 }
	 else
	 {		
		l=side1+side2+side3;
		a=sqrt(0.5*l*(0.5*l-side1)*(0.5*l-side2)*(0.5*l-side3));
		printf("L = %.2f, A = %.2f",l,a);	
	  } 
	return 0;
}
*/



