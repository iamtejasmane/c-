#include<stdio.h>

int num1 = 10;
namespace na
{
	int num2 = 20;
	namespace nb	//Nested Namespace
	{
		int num3 = 30;
	}
}
int main( void )
{

	printf("Num1	:	%d\n", ::num1);	//OK
	//printf("Num1	:	%d\n", num1);	//OK

	printf("Num2	:	%d\n", na::num2);	//OK
	//printf("Num2	:	%d\n", ::na::num2);	//OK

	printf("Num3	:	%d\n", na::nb::num3);	//OK
	//printf("Num3	:	%d\n", ::na::nb::num3);	//OK
	return 0;
}
