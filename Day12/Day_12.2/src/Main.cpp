#include<iostream>
#include<string>
using namespace std;
namespace kdac
{
	class IllegalArgumentException
	{
	private:
		string message;
	public:
		IllegalArgumentException( const string message ) throw( ) : message( message )
		{	}
		string getMessage( void )const throw( )
		{
			return this->message;
		}
	};
	class Complex
	{
	private:
		int real;
		int imag;
	public:
		Complex( void ) throw( ) : real( 0 ), imag( 0 )
		{	}
		Complex( int real, int imag )throw( IllegalArgumentException )
		{
			this->setReal(real);
			this->setImag(imag);
		}
		int getReal( void )const throw( )
		{
			return this->real;
		}
		void setReal( const int real )throw( IllegalArgumentException )
		{
			if( real < 0 )
				throw IllegalArgumentException("Invalid real number");
			this->real = real;
		}
		int getImag( void )const throw( )
		{
			return this->imag;
		}
		void setImag( const int imag )throw( IllegalArgumentException )
		{
			if( imag < 0 )
				throw IllegalArgumentException("Invalid imag number");
			this->imag = imag;
		}
	};
}
using namespace kdac;
void accept_record( Complex &complex )throw( IllegalArgumentException )
{
	int real;
	cout<<"Enter real number	:	";
	cin>>real;
	complex.setReal(real);
	int imag;
	cout<<"Enter imag number	:	";
	cin>>imag;
	complex.setImag(imag);
}
void print_record( const Complex &complex )throw( )
{
	cout<<"Real Number	:	"<<complex.getReal()<<endl;
	cout<<"Imag Number	:	"<<complex.getImag()<<endl;
}
int menu_list( void )
{
	int choice;
	cout<<"0.Exit"<<endl;
	cout<<"1.Accept Record"<<endl;
	cout<<"2.Print Record"<<endl;
	cout<<"Enter choice	:	";
	cin>>choice;
	return choice;
}
int main( void )
{
	try
	{
		int choice;
		Complex complex;
		while( ( choice = ::menu_list( ) ) != 0 )
		{
			try
			{
				switch( choice )
				{
				case 1:
					accept_record(complex);
					break;
				case 2:
					print_record(complex);
					break;
				}
			}
			catch( IllegalArgumentException &ex )
			{
				cout<<ex.getMessage()<<endl;
			}
		}
	}
	catch(...)
	{
		cout<<"Exception"<<endl;
	}
	return 0;
}
