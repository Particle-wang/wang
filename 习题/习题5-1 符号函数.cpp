#include <stdio.h>

int sign( int x );
/*其中x是用户传入的整型参数。符号函数的定义为：
若x大于0，sign(x) = 1；
若x等于0，sign(x) = 0；
否则，sign(x) = ?1。*/

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

