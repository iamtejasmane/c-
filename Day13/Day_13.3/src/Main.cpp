#include<iostream>
using namespace std;

class Complex
{
private:
	int real;
	int imag;
public:
	Complex( void ) : real( 0 ), imag( 0 )
	{
		cout<<"Complex( void )"<<endl;
	}
	Complex( int real, int imag ) : real( real ), imag( imag )
	{
		cout<<"Complex( int real, int imag )"<<endl;
	}
	void printRecord( void )
	{
		cout<<this->real<<"	"<<this->imag<<endl;
	}
	~Complex( void )
	{
		cout<<"~Complex( void )"<<endl;
	}
};
int main( void )
{
	Complex *ptr = new Complex[ 3 ];
	for( int index = 0; index < 3; ++ index )
		ptr[ index ].printRecord();
	delete[] ptr;
	ptr = NULL;
	return 0;
}
int main2( void )
{
	Complex *ptr = new Complex( 10, 20 );	//Complex::Complex(int, int)
	ptr->printRecord();
	delete ptr;	//Complex::~Complex()
	return 0;
}

int main1( void )
{
	//Complex *ptr = new Complex;	//Ok
	Complex *ptr = new Complex();	//Complex::Complex()
	ptr->printRecord();
	delete ptr;	//Complex::~Complex()
	return 0;
}
