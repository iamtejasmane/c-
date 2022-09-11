#include<iostream>
using namespace std;

void print( int number )
{
	cout<<"int : "<<number<<endl;
}
void print( int *number )
{
	cout<<"int* : "<<number<<endl;
}
int main( void )
{
	//print( 10 );	//int : 10

	int number = 10;
	//print( &number );	//int* : 0x7ffeefb93438

	// #define NULL 0

	//print( NULL );	//error: call to 'print' is ambiguous

	//print( nullptr  );	//int* : 0x0


	//int *ptr = NULL;	//OK

	int *ptr = nullptr;	//OK
	return 0;
}
