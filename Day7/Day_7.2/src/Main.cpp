#include<iostream>
using namespace std;

void print( int number )
{
	cout<<"int : "<<number<<endl;
}
void print( float number )
{
	cout<<"float : "<<number<<endl;
}
int main( void )
{
	//print( 10 );	//int : 10

	//print( 10.5 );	// error: call to 'print' is ambiguous

	//print( 10.5f );	//float : 10.5

	print( ( int )10.5 );	//int : 10
	return 0;
}
