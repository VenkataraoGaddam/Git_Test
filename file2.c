#include<stdio.h>

int main( void )
{
	int a = 10;
	int b = 20;
	printf("\n Swapping the numbers ");
	printf("\n%d : %d",a,b);
	a = a ^ b;
	b = a ^ b;
	a = a ^ b;
	printf("\n %d : %d", a, b );
	return 0;
}