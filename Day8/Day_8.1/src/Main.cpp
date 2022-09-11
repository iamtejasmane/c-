#include<iostream>
using namespace std;
class Complex
{
private:
	int real;
	int imag;
public:
	//Complex *const this = &c1
	void initComplex( int real, int imag )
	{
		this->real = real;
		this->imag = imag;
	}
	//Complex *const this = &c1
	void acceptRecord( void )
	{
		cout<<"Real Number	:	";
		cin>>this->real;
		cout<<"Imag Number	:	";
		cin>>this->imag;
	}
	//Complex *const this = &c1
	int getReal( void )
	{
		return this->real;
	}
	//Complex *const this = &c1
	void setReal( int real )
	{
		this->real = real;
	}
	//Complex *const this = &c1
	int getImag( void )
	{
		return this->imag;
	}
	//Complex *const this = &c1
	void setImag( int imag )
	{
		this->imag = imag;
	}
	//Complex *const this = &c1
	void printRecord( void )
	{
		cout<<"Real Number	:	"<<this->real<<endl;
		cout<<"Imag Number	:	"<<this->imag<<endl;
	}
};
int main( void )
{
	Complex c1;
	c1.initComplex( 0, 	0 );	//c1.initComplex( &c1, 0, 0 );
	//c1.acceptRecord( );	//c1.acceptRecord(&c1);
	c1.setReal( 50 );	//c1.setReal( &c1, 50 );
	c1.setImag( 60 );	//c1.setImag( &c1, 60 );
	//c1.printRecord( );	//c1.printRecord( &c1 );

	int real = c1.getReal( );	//int real = c1.getReal( &c1 );
	int imag = c1.getImag( );	//int imag = c1.getImag( &c1 );
	cout<<real<<"	"<<imag<<endl;
	return 0;
}
