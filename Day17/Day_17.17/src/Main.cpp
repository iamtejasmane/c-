#include<iostream>
using namespace std;

int main( void )
{
	//Local Class
	class Complex
	{
	private:
		int real, imag;
	public:
		Complex( void ) : real( 10 ), imag( 20 )
		{	}
		void printRecord( void )
		{
			cout<<"Real Number	:	"<<this->real<<endl;
			cout<<"Imag Number	:	"<<this->imag<<endl;
		}
	};

	Complex c1;
	c1.printRecord();
	return 0;
}
