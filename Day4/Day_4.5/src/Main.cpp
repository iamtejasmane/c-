#include<stdio.h>


namespace na
{
	int num1 = 10;
}
int num1 = 20;
int main( void )
{
	using namespace na;
	printf("Num1	:	%d\n",num1);

	return 0;
}
int main2( void )
{
	int num1 = 20;
	using namespace na;
	printf("Num1	:	%d\n",num1);	//20
	printf("Num1	:	%d\n",na::num1);	//10
	return 0;
}

int main1( void )
{
	using namespace na;
	printf("Num1	:	%d\n",num1);
	return 0;
}
