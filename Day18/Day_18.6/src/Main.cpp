#include<iostream>
using namespace std;
class Complex
{
private:
	int real;
	int imag;
public:
	Complex( int real = 0, int imag = 0 )
	{
		this->real = real;
		this->imag = imag;
	}
	void printRecord( void )
	{
		cout<<this->real<<"	"<<this->imag<<endl;
	}
	friend Complex operator+( Complex &c1, Complex &c2 )
	{
		Complex temp;
		temp.real = c1.real + c2.real;
		temp.imag = c1.imag + c2.imag;
		return temp;
	}
	friend Complex operator+( Complex &c1, int value )
	{
		Complex temp;
		temp.real = c1.real + value;
		temp.imag = c1.imag + value;
		return temp;
	}
	friend Complex operator+( int value, Complex &c1 )
	{
		Complex temp;
		temp.real = value + c1.real;
		temp.imag = value + c1.imag;
		return temp;
	}
	friend bool operator==( Complex &c1, Complex &c2 )
	{
		return c1.real == c2.real && c1.imag == c2.imag;
	}
	friend Complex operator+=( Complex &c1, Complex &c2 )
	{
		c1.real += c2.real;
		c1.imag += c2.imag;
		return c1;
	}
	friend Complex operator++( Complex &c1 )
	{
		Complex temp;
		temp.real = ++ c1.real;
		temp.imag = ++ c1.imag;
		return temp;
	}
	friend Complex operator++( Complex &c1, int )
	{
		Complex temp;
		temp.real = c1.real ++;
		temp.imag = c1.imag ++;
		return temp;
	}
};
int main( void )
{
	Complex c1( 10, 20 );
	Complex c2 = c1 ++;	//c2 = operator++( c1, 0 );
	c1.printRecord();
	c2.printRecord();
	return 0;
}
int main6( void )
{
	Complex c1( 10, 20 );
	Complex c2 = ++ c1;	//c2 = operator++( c1 );
	c1.printRecord();
	c2.printRecord();
	return 0;
}
int main5( void )
{
	Complex c1( 10, 20 );
	Complex c2( 30, 40 );
	c1 += c2;	//operator+=( c1, c2 );

	c1.printRecord();
	c2.printRecord();
	return 0;
}
int main4( void )
{
	Complex c1( 10, 20 );
	Complex c2( 10, 20 );
	bool status = c1 == c2;	//status = operator==( c1, c2 );
	if( status == true )
		cout<<"Equal"<<endl;
	else
		cout<<"Not Equal"<<endl;
	return 0;
}
int main3( void )
{
	Complex c1( 10, 20 );
	//Complex c2 = 5 + c1;	//c2 = 5.operator+( c1 ); //Not OK
	Complex c2 = 5 + c1;	//c2 = operator+( 5, c1 );
	c1.printRecord();
	c2.printRecord();
	return 0;
}
int main2( void )
{
	Complex c1( 10, 20 );
	//Complex c2 = c1 + 5;	//c2 = c1.operator+( 5 );
	Complex c2 = c1 + 5;	//c2 = operator+( c1, 5 );


	c1.printRecord();
	c2.printRecord();
	return 0;
}
int main1( void )
{
	Complex c1( 10, 20 );
	Complex c2( 30, 40 );
	Complex c3;
	c3 = c1 + c2;	//c3 = operator+( c1, c2 );
	c3.printRecord();
	return 0;
}
