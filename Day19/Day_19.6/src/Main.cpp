#include<cstring>
#include<iostream>
using namespace std;

class String
{
private:
	size_t length;
	char *buffer;
public:
	String( void ) : length( 0 ), buffer( NULL )
	{	}
	String( const char *str  ) : length( strlen(str) ), buffer( new char[ this->length + 1 ] )
	{
		strcpy( this->buffer, str );
	}
	String( size_t length )
	{
		this->length = length;
		this->buffer = new char[ this->length + 1 ];
	}
	String( const String &other  ) : length( other.length ), buffer( new char[ this->length + 1 ] )
	{
		strcpy( this->buffer, other.buffer );
	}
	String& operator=( const String &other  )
	{
		this->~String( );
		this->length =  other.length;
		this->buffer = new char[ this->length + 1 ];
		strcpy( this->buffer, other.buffer );
		return *this;
	}
	String operator+( String &other )
	{
		String temp( this->length + other.length );
		strcpy(temp.buffer, this->buffer);
		strcat(temp.buffer, other.buffer);
		return temp;
	}
	String operator+( const char *str )
	{
		String temp( this->length + strlen(str) );
		strcpy(temp.buffer, this->buffer);
		strcat(temp.buffer, str);
		return temp;
	}
	void operator()( const char *str )
	{
		this->~String( );
		this->length = strlen(str);
		this->buffer = new char[ this->length + 1 ];
		strcpy(this->buffer, str);
	}
	void operator~( void )
	{
		int i = 0, j = this->length - 1;
		while( i < j )
			swap(this->buffer[ i ++], this->buffer[ j -- ] );
	}
	~String( void )
	{
		if( this->buffer != NULL )
		{
			delete[] this->buffer;
			this->buffer = NULL;
		}
	}
	friend ostream& operator<<( ostream &cout, const String &other )
	{
		cout<<other.buffer<<endl;
		return cout;
	}
};
int main( void )
{
	String s1( 5 );
	s1("SunBeam"); //s1.operator( )("SunBeam");
	cout<<s1<<endl;
	return 0;
}
int main3( void )
{
	String s1("SunBeam");
	~s1;	//s1.operator~( );
	cout<<s1<<endl;
	return 0;
}
int main2( void )
{
	String s1("SunBeam");
	String s2 = s1 + "Karad";
	cout<<s2<<endl;
	return 0;
}
int main1( void )
{
	String s1("SunBeam");
	String s2("Karad");
	String s3 = s1 + s2;
	cout<<s3<<endl;
	return 0;
}
