#include<iostream>
using namespace std;
class Complex
{
private:
	int real;
	int imag;
public:
	//Complex *const this = &c1
	Complex( void )
	{
		cout<<"Complex( void )"<<endl;
		this->real = 0;
		this->imag = 0;
	}
	//Complex *const this = &c1
	Complex( int value )
	{
		cout<<"Complex( int value )"<<endl;
		this->real = value;
		this->imag = value;
	}
	//Complex *const this = &c1
	Complex( int real, int imag )
	{
		cout<<"Complex( int real, int imag )"<<endl;
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
	void printRecord( void )
	{
		cout<<"Real Number	:	"<<this->real<<endl;
		cout<<"Imag Number	:	"<<this->imag<<endl;
	}
};
int main( void )
{
	Complex c1;
	Complex c2(10);
	Complex c3(10,20);
	c1.printRecord();
	return 0;
}
