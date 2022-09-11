#include<iostream>
#include<string>
using namespace std;
class IllegalArgumentException
{
private:
	string message;
public:
	IllegalArgumentException( string message = "Illegal Argument Exception" ) : message ( message )
	{	}
	string getMessage( void )const throw( )
	{
		return this->message;
	}
};
class ArrayIndexOutOfBoundsException
{
private:
	string message;
public:
	ArrayIndexOutOfBoundsException( string message = "Array Index Out Of Bounds Exception") : message ( message )
	{	}
	string getMessage( void )const throw( )
	{
		return this->message;
	}
};
class Array
{
private:
	int size;
	int *arr;
public:
	Array( void )throw( )
	{
		this->size = 0;
		this->arr = NULL;
	}
	Array( int size )throw( bad_alloc )
	{
		this->size = size;
		this->arr = new int[ this->size ];
	}
	void acceptRecord( void )throw( )
	{
		for( int index = 0; index < this->size; ++ index )
		{
			cout<<"Enter element	:	";
			cin>>this->arr[ index ];
		}
	}
	void printRecord( void )const throw( )
	{
		for( int index = 0; index < this->size; ++ index )
			cout<<this->arr[ index ]<<"	";
		cout<<endl;
	}
	int getElement( int index )const throw( ArrayIndexOutOfBoundsException )
	{
		if( index < 0 || index > this->size )
			throw ArrayIndexOutOfBoundsException("Invalid index ");
		return this->arr[ index ];
	}
	void setElement( const int index, const int element )throw( ArrayIndexOutOfBoundsException)
	{
		if( index < 0 || index > this->size )
			throw ArrayIndexOutOfBoundsException("Invalid index ");
		this->arr[ index ] = element;
	}
	void setSize( int size )throw( IllegalArgumentException, bad_alloc )
	{
		if( size < 0 )
			throw IllegalArgumentException("Invalid size");
		this->~Array();
		if( size == 0 )
			this->size = 0;
		else
		{
			this->size = size;
			this->arr = new int[ this->size ];
		}
	}
	~Array( void )throw( )
	{
		if( this->arr != NULL )
		{
			delete[] this->arr;
			this->arr = NULL;
		}
	}
};
int main( void )
{
	Array a1( 3 );
	//a1.setSize( 5 );
	a1.setElement(0, 100 );
	a1.setElement(1, 200 );
	a1.setElement(2, 300 );

	int element ;
	element = a1.getElement( 0 );
	cout<<"Element	:	"<<element<<endl;
	element = a1.getElement( 1 );
	cout<<"Element	:	"<<element<<endl;
	element = a1.getElement( 2 );
	cout<<"Element	:	"<<element<<endl;
	return 0;
}
