#include <stdio.h>

void pyramid( int n );
/* 
    1 
   2 2 
  3 3 3 
 4 4 4 4 
5 5 5 5 5    */

int main()
{    
    int n;

    scanf("%d", &n);
    pyramid(n);

    return 0;
}
/*void pyramid( int n )
{
	int lin;
	int cols; 
	int k;
	for(lin=0;lin<n;lin++)
	{	for(cols=n-lin-1;cols<n;cols++)
		{
			for(k=lin+1;k<n;k++)
				printf(" "); 
			printf("%d ",lin+1);
		} 
		putchar('\n');
	}	  
} */
void pyramid( int n )
{
	int lin;
	int cols; 
	int k;
	for(lin=0;lin<n;lin++)
		{
		for(k=lin+1;k<n;k++)
			printf(" "); 
		for(cols=n-lin-1;cols<n;cols++)
			printf("%d ",lin+1);
		putchar('\n');
		} 
	  
} 

