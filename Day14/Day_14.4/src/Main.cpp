#include<cstring>
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
		cout<<"Real Number	:	"<<this->real<<endl;
		cout<<"Imag Number	:	"<<this->imag<<endl;
	}
};
int main( void )
{
	int arr1[ 3 ] = { 10, 20, 30 };
	int arr2[ 3 ];
	memcpy(arr2, arr1, 3 * sizeof( int ) );
	for( int index = 0; index < 3; ++ index )
		cout<<arr2[ index ]<<endl;
	return 0;
}
int main2( void )
{
	Complex c1( 10, 20 ), c2;
	//Complex c2 = c1;
	memcpy(&c2, &c1, sizeof(Complex));
	c2.printRecord();
	return 0;
}
int main1( void )
{
	int num1 = 10;
	int num2 = num1;	//Shallow Copy / bitwise copy / bit-by-bit copy
	return 0;
}
