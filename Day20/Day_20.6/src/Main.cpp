#include<iostream>
#include<string>
using namespace std;

class StackOverflowException
{
private:
	string message;
public:
	StackOverflowException( string message = "StackOverflow Exception" ) : message( message )
	{	}
	string getMessage( void )const throw( )
	{
		return this->message;
	}
};
class StackUnderflowException
{
private:
	string message;
public:
	StackUnderflowException( string message = "StackUnderflow Exception" ) : message( message )
	{	}
	string getMessage( void )const throw( )
	{
		return this->message;
	}
};
//template<typename T> //T => Type Parameter
template<class T> //T => Type Parameter
class Stack //Parameterized Type
{
private:
	int top;
	int size;
	T *arr;
public:
	Stack( int size  = 0) throw( bad_alloc )
	{
		this->top = -1;
		this->size = size;
		this->arr = NULL;
		if( this->size > 0 )
			this->arr = new T[ this->size ];
	}
	bool empty( void )const throw( )
	{
		return this->top == -1;
	}
	bool full( void )const throw( )
	{
		return this->top == this->size - 1;
	}
	void push( T data )throw( StackOverflowException )
	{
		if( this->full())
			throw StackOverflowException("Stack is full");
		this->arr[ ++ this->top ] = data;
	}
	T peek( void )const throw( StackUnderflowException )
	{
		if( this->empty())
			throw StackUnderflowException("Stack is empty");
		return this->arr[ this->top ];
	}
	void pop( void )throw( StackUnderflowException )
	{
		if( this->empty())
			throw StackUnderflowException("Stack is empty");
		-- this->top;
	}
	~Stack( void )throw( )
	{
		if( this->arr != NULL )
		{
			delete[] this->arr;
			this->arr = NULL;
		}
	}
};
void accept_record( int &data )
{
	cout<<"Enter data	:	";
	cin>>data;
}
void print_record( const int &data )
{
	cout<<"Popped element is	:	"<<data<<endl;
}
int menu_list( void )
{
	int choice;
	cout<<"0.Exit"<<endl;
	cout<<"1.Push"<<endl;
	cout<<"2.Pop"<<endl;
	cout<<"Enter choice	:	";
	cin>>choice;
	return choice;
}
int main( void )
{
	int choice,data;
	Stack<int> stk(5); //int => Type Argument
	while( ( choice = ::menu_list( ) ) != 0 )
	{
		try
		{
			switch( choice )
			{
			case 1:
				::accept_record(data);
				stk.push( data );
				break;
			case 2:
				data = stk.peek( );
				::print_record(data);
				stk.pop( );
				break;
			}
		}
		catch( StackOverflowException &ex )
		{
			cout<<ex.getMessage()<<endl;
		}
		catch( StackUnderflowException &ex )
		{
			cout<<ex.getMessage()<<endl;
		}
	}

	return 0;
}
