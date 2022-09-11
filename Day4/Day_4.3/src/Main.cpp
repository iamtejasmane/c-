#include<stdio.h>

namespace na
{
	int num1 = 10;
	int num3 = 30;
}
namespace na
{
	int num2 = 20;
	int num3 = 40;	//Error
}
int main( void )
{
	printf("Num1	:	%d\n", na::num1);
	printf("Num3	:	%d\n", na::num3);	//OK

	printf("Num2	:	%d\n", na::num2);
	return 0;
}
