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
	Complex( int real, int imag )
	{
		cout<<"Complex( int real, int imag )"<<endl;
		this->real = real;
		this->imag = imag;
	}
	//Complex &other = c1
	//Complex *const this = &c2
	Complex( const Complex &other )
	{
		cout<<"Complex( const Complex &other )"<<endl;
		this->real = other.real;
		this->imag = other.imag;
	}
	void printRecord( void )
	{
		cout<<"Real Number	"<<this->real<<endl;
		cout<<"Imag Number	"<<this->imag<<endl;
	}
};
int main( void )
{
	Complex c1(110,20);
	//Complex c2 = c1;
	Complex c2( c1 );
	return 0;
}
int main3( void )
{
	Complex c1(110,20);
	Complex c2;
	c2 = c1;	//c2.operator=( c1 );
	return 0;
}
int main2( void )
{
	Complex c1;
	Complex &c2 = c1;
	return 0;
}
int main1( void )
{
	Complex c1;
	Complex *ptr = &c1;
	return 0;
}
