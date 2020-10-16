#include<stdio.h>
#include<math.h> 
int main(void)
{
	double x1,x2,y1,y2;
	double x,y;
	scanf("%lf %lf %lf %lf",&x1,&y1,&x2,&y2);
	x=x2+x1;
	y=y2+y1;
		if(fabs(x)<0.05)
    {
 
        x = 0.0;
 
    }
 
    if(fabs(y)<0.05)
    {
 
        y = 0.0;
 
    }

	printf("(%.1f, %.1f)",x	,y);
	
	return 0;
 } 
