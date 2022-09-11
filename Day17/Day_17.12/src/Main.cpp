#include<iostream>
using namespace std;

void f1( void );
void f2( void );

int main( void )
{
	return 0;
}
void f1( void )
{
	friend void f2( );	//Not OK
	int number = 10;

}
void f2( )
{
	cout<<"Number	:	"<<number<<endl;
}
