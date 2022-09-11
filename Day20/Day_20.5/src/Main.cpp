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
	//Converting Constructor / Conversion function
	//explicit Complex( int value )
	Complex( int value )
	{
		cout<<"Complex( int value )"<<endl;
		this->real = value;
		this->imag = value;
	}
	Complex( int real, int imag )
	{
		this->real = real;
		this->imag = imag;
	}
	//Conversion Function
	Complex& operator=( const Complex &other )
	{
		cout<<"Complex& operator=( const Complex &other )"<<endl;
		this->real = other.real;
		this->imag = other.imag;
		return *this;
	}
	//Conversion Function
	operator int( )	//Type Conversion Operator Function
	{
		return this->real;
	}
	void printRecord( void )
	{
		cout<<"Real Number	:	"<<this->real<<endl;
		cout<<"Imag Number	:	"<<this->imag<<endl;
	}
};
int main( void )
{
	Complex c1(10,20);
	//int real = c1.getReal();
	int real = c1;
	//int real = c1.operator int( );
	cout<<"Real Number	:	"<<real<<endl;
	return 0;
}
int main2 ( void )
{
	int number = 10;
	Complex c1;	//On c1, parameterless constructor will call
	c1 = number;	//c1 = Complex(number);
	//c1.operator=( Complex(number) );
	c1.printRecord();
	return 0;
}
int main1( void )
{
	int number = 10;
	Complex c1 = number;
	//Complex c1( number );
	c1.printRecord();
	return 0;
}
