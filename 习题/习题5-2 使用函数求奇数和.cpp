#include <stdio.h>

#define MAXN 10

int even( int n );
int OddSum( int List[], int N );
/*/���к���even�������û�����Ĳ���n����ż�Է�����Ӧֵ��
��nΪż��ʱ����1�����򷵻�0��
����OddSum������㲢���ش����N������List[]�����������ĺ͡�*/

int main()
{    
    int List[MAXN], N, i;

    scanf("%d", &N);
    printf("Sum of ( ");
    for ( i=0; i<N; i++ ) {
        scanf("%d", &List[i]);
        if ( even(List[i])==0 )
            printf("%d ", List[i]);
    }
    printf(") = %d\n", OddSum(List, N));

    return 0;
}
int even( int n )
{	
	int is_even=0;
	if(n%2==0)
		is_even=1;
	else
		is_even=0;

	return is_even;
 } 
int OddSum( int List[], int N )
{
	int i = 0;
	int sum = 0;
	for (i = 0; i < N; i++)
	{
		if (even(List[i]) == 0)
			sum = sum + List[i];
	}
	return sum;
}
