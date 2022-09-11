#include<cstring>
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

	//Complex &other = c1
	//Complex *const this = &c2
	/*Complex( const Complex &other ) : real( other.real ), imag( other.imag )
	{
		cout<<"Complex( const Complex &other )"<<endl;
	}*/
	//Complex &other = c1
	//Complex *const this = &c2
	/*Complex( const Complex &other )
	{
		cout<<"Complex( const Complex &other )"<<endl;
		memcpy(this, &other, sizeof( Complex ) );
	}*/
public:
	void printRecord( void )
	{
		cout<<"Real Number	"<<this->real<<endl;
		cout<<"Imag Number	"<<this->imag<<endl;
	}
};
int main( void )
{
	Complex c1(10,20);	//On c1 object parameterized constructor will call
	Complex c2 =  c1 ;   //On c2 object copy constructor will call
	return 0;
}
