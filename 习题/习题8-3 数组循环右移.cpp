#include <stdio.h>
#define MAXN 10
int ArrayShift( int a[], int n, int m );
int main()
{
    int a[MAXN], n, m;
    int i;

    scanf("%d %d", &n, &m);
    for ( i = 0; i < n; i++ ) scanf("%d", &a[i]);

    ArrayShift(a, n, m);

    for ( i = 0; i < n; i++ ) {
        if (i != 0) printf(" ");
        printf("%d", a[i]);
    }
    printf("\n");

    return 0;
}
int ArrayShift( int a[], int n, int m )
{
	int i,j;
	int temp[n];
	for(i=0 ;i<n;i++)//¿½±´Êý×é 
	{	
		temp[i]=a[i];
	}
	for(i=0;i<n;i++)
	{
		while(m>n)
			m=m-n ;
		if(i-m<0) 
			a[i]=temp[i-m+n];
		else
			a[i]=temp[i-m];
	}
	return 0; 
}

