#include <stdio.h>

struct complex{
    int real;
    int imag;
};

struct complex multiply(struct complex x, struct complex y);

int main()
{
    struct complex product, x, y;

    scanf("%d%d%d%d", &x.real, &x.imag, &y.real, &y.imag);
    product = multiply(x, y);
    printf("(%d+%di) * (%d+%di) = %d + %di\n", 
            x.real, x.imag, y.real, y.imag, product.real, product.imag);

    return 0;
}
//设z1=a+bi，z2=c+di(a、b、c、d∈R)是任意两个复数
//，那么它们的积(a+bi)(c+di)=(ac-bd)+(bc+ad)i。
struct complex multiply(struct complex x, struct complex y)
{
	struct complex temp;
	temp.real=x.real*y.real-x.imag*y.imag;
	temp.imag=x.imag*y.real+x.real*y.imag;
	
	return temp; 
	
 } 
