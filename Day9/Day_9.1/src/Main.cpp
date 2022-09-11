#include<iostream>
using namespace std;

class Complex
{
private:
	int real;
	int imag;
public:
	Complex( void )
	{
		cout<<"Complex( void )"<<endl;
		this->real = 0;
		this->imag = 0;
	}
	Complex( int value )
	{
		cout<<"Complex( int value )"<<endl;
		this->real = value;
		this->imag = value;
	}
	Complex( int real, int imag )
	{
		cout<<"Complex( int real, int imag )"<<endl;
		this->real = real;
		this->imag = imag;
	}
	void printRecord( void )
	{
		cout<<"Real Number	:	"<<this->real<<endl;
		cout<<"Imag Number	:	"<<this->imag<<endl;
	}
};
int main( void )
{
	//Complex c1;	//Complex( void )

	//Complex c2(10);	//Complex( int value )

	//Complex c3(20, 30 );	//Complex( int real, int imag )

	//Complex c4( ); //warning: empty parentheses interpreted as a function declaration

	//Complex c5 = 40;	//Complex c5( 40 ) ;	//Complex( int value )

	//Complex(50, 60); // Anonymous Object : Complex( int real, int imag )
	//Complex(50, 60).printRecord();

	//Complex c6 = 70, 80;	//Not OK //Complex c6( 70 ), 80;

	//Complex c7 = ( 70, 80 ); //Complex c7( 80 ); //Complex( int value )

	//Complex c8 = { 90, 100 }; // error: non-aggregate type

	return 0;
}
