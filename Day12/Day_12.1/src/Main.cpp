#include<iostream>
#include<string>
using namespace std;
class ArithmeticException
{
private:
	string message;
public:
	ArithmeticException( const string message ) throw( ) : message( message )
	{	}
	string getMessage( void )const throw( )
	{
		return this->message;
	}
};
void accept_record( string message, int &number )throw( )
{
	cout<<message;
	cin>>number;
}
int calculate( int num1, int num2 )throw( ArithmeticException )
{
	if( num2 == 0 )
		throw ArithmeticException("Divide by zero exception");
	return num1 / num2;
}
void print_record( int &result )throw( )
{
	cout<<"Result	:	"<<result<<endl;
}
int main1( void )
{
	cout<<"Open File"<<endl;
	int num1;
	accept_record( "Num1	:	", num1 );
	int num2;
	accept_record( "Num2	:	", num2 );
	try
	{
		int result = ::calculate(num1, num2);
		print_record( result );
	}
	catch( ArithmeticException &ex )
	{
		cout<<ex.getMessage()<<endl;
	}
	catch( ... )	//Generic Catch block
	{
		cout<<"Inside generic catch block"<<endl;
	}
	cout<<"Close File"<<endl;
	return 0;
}
