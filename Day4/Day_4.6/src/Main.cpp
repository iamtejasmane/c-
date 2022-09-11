#include<stdio.h>


namespace na
{
	int num1 = 10;
}
namespace nb
{
	int num1 = 20;
}

int main( void )
{
	using namespace na;
	printf("Num1	:	%d\n",num1);	//OK

	using namespace nb;
	printf("Num1	:	%d\n",num1);	//Error
	return 0;
}
