#include<iostream>
#include<string>
using namespace std;

class Exception
{
private:
	string message;
public:
	Exception( string message ) throw( ) : message( message )
	{	}
	string getMessage( void )const throw( )
	{
		return this->message;
	}
};
class LinkedList	//Top Level class
{
private:
	class Node	//Nested class
	{
	private:
		int data;
		Node *next;
	public:
		Node( int data = 0 )throw( )
		{
			this->data = data;
			this->next = NULL;
		}
		friend class LinkedList;
	};
private:
	Node *head;
	Node *tail;
public:
	LinkedList( void )throw( )
	{
		this->head = NULL;
		this->tail = NULL;
	}
	bool empty( void )const throw( )
	{
		return this->head == NULL;
	}
	void addLast( int data )throw( bad_alloc )
	{
		Node *newNode = new Node( data );
		if( this->empty( ) )
			this->head = newNode;
		else
			this->tail->next = newNode;
		this->tail = newNode;
	}
	void removeFirst( void )throw(Exception)
	{
		if( this->empty())
			throw Exception("LinkedList is empty");
		else if( this->head == this->tail)
		{
			delete this->head;
			this->head = this->tail = NULL;
		}
		else
		{
			Node *ptrNode = this->head;
			this->head = this->head->next;
			delete ptrNode;
		}
	}
	void print( void )const throw( Exception )
	{
		if( this->empty() )
			throw Exception("LinkedList is empty");
		Node *trav = this->head;
		while( trav != NULL )
		{
			cout<<trav->data<<"	";
			trav = trav->next;
		}
		cout<<endl;
	}
	~LinkedList( void )throw( )
	{
		while( !this->empty( ) )
			this->removeFirst();
	}
};
int main( void )
{
	try
	{
		LinkedList list;
		list.addLast( 10 );
		list.addLast( 20 );
		list.addLast( 30 );
		list.print( );
	}
	catch( Exception &ex )
	{
		cout<<ex.getMessage()<<endl;
	}
	return 0;
}
