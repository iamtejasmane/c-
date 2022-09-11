#include<cstring>
#include<iostream>
using namespace std;
class String
{
private:
	size_t length;
	char *buffer;
public:
	String( void ) : length ( 0 ), buffer( NULL )
	{	}
	String( size_t length ) : length ( length ), buffer( new char[ this->length ]  )
	{	}
	String( const char *str )
	{
		this->length = strlen(str);
		this->buffer = new char[ this->length + 1 ];
		strcpy( this->buffer, str );
	}
	String( const String &other )
	{
		this->length = other.length;
		this->buffer = new char[ this->length + 1 ];
		strcpy( this->buffer, other.buffer );
	}
	void printRecord( void )
	{
		cout<<this->buffer<<endl;
	}
	//toUpperCase
	void toUpperCase( );
	//toLowerCase
	void toLowerCase( );
	~String( void )
	{
		if( this->buffer != NULL )
		{
			delete[] this->buffer;
			this->buffer = NULL;
		}
	}
};
int main( void )
{
	String s1("Karad");
	String s2 = s1;
	s2.printRecord( );
	return 0;
}
