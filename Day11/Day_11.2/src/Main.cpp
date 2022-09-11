#include<iostream>
using namespace std;
void print( int number )
{
	cout<<"int	:	"<<number<<endl;
}
void print( int &number )
{
	cout<<"int&	:	"<<number<<endl;
}
int main( void )
{
	//print( 10 );	//int	:	10

	int x = 10;
	//print( x );	// error: call to 'print' is ambiguous

	return 0;
}
