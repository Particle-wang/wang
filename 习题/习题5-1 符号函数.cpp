#include <stdio.h>

int sign( int x );
/*����x���û���������Ͳ��������ź����Ķ���Ϊ��
��x����0��sign(x) = 1��
��x����0��sign(x) = 0��
����sign(x) = ?1��*/

int main()
{
    int x;

    scanf("%d", &x);
    printf("sign(%d) = %d\n", x, sign(x));

    return 0;
}

int sign(int x)
{
	int k;
	if (x>0)
		k=1;
	else if (x==0)
		k=0;
	else
		k=-1;
	
	return k;
	
		
} 

