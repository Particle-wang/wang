#include <stdio.h>
int main(void)
{
	int n;
	int a[100];
	int i,j;
	scanf("%d",&n);
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	for(i=0;i<n;i++)
		for(j=0;j<n;j++)
		{
		if(a[j]<a[i])
			a[i]=a[j];
		}
		printf("min = %d",a[0]);
	
	return 0;
}
