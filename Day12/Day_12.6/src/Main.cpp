#include<iostream>
using namespace std;

int n1 = 10;
int n2 = 20;
void print( int &num1 = n1, int num2 = n2, int num3 = 30)
{
	cout<<"Num1	:	"<<num1<<endl;
	cout<<"Num2	:	"<<num2<<endl;
	cout<<"Num3	:	"<<num3<<endl;
}
int main( void )
{
	int number = 10;
	print( number );

	print( );
	return 0;
}
