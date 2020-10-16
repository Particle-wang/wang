/*         Ωœ¥ÛN∂Œ¥ÌŒÛ
#include<stdio.h>
int main(void)
{
	int N;
	int i,j;
	double temp=0;
	double sum=0;
	double aver=0,max=0,min=0; 
	double a[100];
	scanf("%d",&N);
	for(i=0;i<N;i++)
	{
		scanf("%lf",&a[i]);
		sum+=a[i];
	}
	aver=sum/N;
	for(i=0;i<N-1;i++)
		for(j=i+1;j<N;j++)
			if(a[j]>a[i])
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
	printf("average = %.2lf\nmax = %.2lf\nmin = %.2lf"
	,aver,a[0],a[N-1]);  

}

*/
#include<stdio.h>
#include<stdlib.h> 
int main(void)
{
	int N;
	int i,j;
	double temp=0;
	double sum=0;
	double aver=0,max=0,min=0; 
	double *p;

	scanf("%d\n",&N);
	p=(double *)calloc(N,sizeof(double));
	for(i=0;i<N;i++)
	{
		scanf("%lf",p+i);
		sum+=*(p+i);
	}
	aver=sum/N;
	for(i=0;i<N-1;i++)
		for(j=i+1;j<N;j++)
			if(*(p+j)>*(p+i))
			{
				temp=*(p+i);
				*(p+i)=*(p+j);
				*(p+j)=temp;
			}
	printf("average = %.2lf\nmax = %.2lf\nmin = %.2lf"
	,aver,*(p+0),*(p+N-1));  
	free(p);
}
