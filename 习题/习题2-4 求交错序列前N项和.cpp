#include<stdio.h>
#include<math.h>
int main(void)
{
	int N;
	int fenzi,fenmu ;
	int abs; 
	double sum;
	scanf("%d",&N); 
	for(fenzi=1,fenmu=1,abs=1;fenzi<=N;fenzi++,fenmu+=2,abs*=-1)
		{
			sum	+=fenzi*1.0/fenmu*abs;
		} 
	printf("%0.3f",sum); 
	return 0;
 } 
