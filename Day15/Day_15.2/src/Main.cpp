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
		int getSize( void )const throw( )
		{
			return this->size;
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
}
using namespace kdac;
void accept_record( Array &a1 )throw( ArrayIndexOutOfBoundsException )
{
	int element ;
	for( int index = 0; index < a1.getSize(); ++ index )
	{
		cout<<"Enter element	:	";
		cin>>element;
		a1.setElement(index, element );
	}
}
void print_record( Array &a1 )throw( ArrayIndexOutOfBoundsException )
{
	int element ;
	for( int index = 0; index < a1.getSize(); ++ index )
	{
		element = a1.getElement( index );
		cout<<"Element	:	"<<element<<endl;
	}
}
enum IOOperation
{
	EXIT, ACCEPT_RECORD, PRINT_RECORD	//Enum constants/Enumerator
	//EXIT = 0, ACCEPT_RECORD = 1, PRINT_RECORD = 2
};
IOOperation menu_list( void )
{
	int choice;
	cout<<"0.Exit"<<endl;
	cout<<"1.Accept Record"<<endl;
	cout<<"2.Print Record"<<endl;
	cout<<"Enter choice	:	";
	cin>>choice;
	return IOOperation(choice);
}
int main( void )
{
	try
	{
		IOOperation choice;
		Array a1;
		a1.setSize(5);
		while( ( choice = ::menu_list( ) ) != EXIT)
		{
			try
			{
				switch( choice )
				{
				case ACCEPT_RECORD:
					::accept_record(a1);
					break;
				case PRINT_RECORD:
					::print_record(a1);
					break;
				}
			}
			catch( ArrayIndexOutOfBoundsException &ex )
			{
				cout<<ex.getMessage()<<endl;
			}
		}
	}
	catch( IllegalArgumentException &ex)
	{
		cout<<ex.getMessage()<<endl;
	}
	catch( bad_alloc &ex )
	{
		cout<<ex.what()<<endl;
	}
	catch( ... )
	{
		cout<<"Exception"<<endl;
	}
	return 0;
}
int main2( void )
{
	int choice;
	Array a1;
	a1.setSize(5);
	while( ( choice = ::menu_list( ) ) != 0 )
	{
		switch( choice )
		{
		case 1:
			::accept_record(a1);
			break;
		case 2:
			::print_record(a1);
			break;
		}
	}
	return 0;
}
int main1( void )
{
	Array a1( 3 );
	accept_record( a1 );
	print_record( a1 );

	a1.setSize(5);

	accept_record( a1 );
	print_record( a1 );
	return 0;
}
