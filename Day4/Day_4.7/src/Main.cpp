#include<stdio.h>

namespace na
{
	int num1 = 10;
	void print( void )
	{
		printf("Num1	:	%d\n", num1 );
	}
	struct Point
	{
		int xPos, yPos;
	};
	namespace nb
	{
		int num2 = 20;
	}
}
int main( void )
{
	na::print();

	na::Point pt1 = { 10, 20 };

	printf("Num2	:	%d\n", na::nb::num2);
	return 0;
}
