#include<iostream>
using namespace std;

class Complex
{
private:
	int real;
	int imag;
public:
	Complex( int real = 0, int imag = 0 );

	void printRecord( void )const;
};
Complex::Complex( int real , int imag  ) : real( real ),  imag( imag )
{	}
void Complex::printRecord( void )const
{
	cout<<"Real Number	:	"<<this->real<<endl;
	cout<<"Imag Number	:	"<<this->imag<<endl;
}
int main( void )
{
	Complex c1;
	c1.printRecord();
	Complex c2(10);
	c2.printRecord();
	Complex c3(10,20);
	c3.printRecord();
	return 0;
}
