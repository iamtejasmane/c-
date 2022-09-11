#include<iostream>
using namespace std;

template<class T>
class LinkedList;

template<class T>
class Node
{
private:
	T data;
	Node *next;
public:
	Node( T data = T( ) )
	{
		this->data = data;
		this->next = NULL;
	}
	friend class LinkedList<T>;
};
template<class T>
class LinkedList
{
private:
	Node<T> *head;
	Node<T> *tail;
public:
	LinkedList( void )
	{
		this->head = NULL;
		this->tail = NULL;
	}
	void addFirst( T data )
	{
		Node<T> *newNode = new Node<T>( data );
		if( this->head == NULL )
			this->head = newNode;
		else
			this->tail->next = newNode;
		this->tail = newNode;
	}
	void printRecord( void )
	{
		Node<T> *trav = this->head;
		while( trav != NULL )
		{
			T data = trav->data;
			cout<<data<<"	";
			trav = trav->next;
		}
		cout<<endl;
	}
};
int main( void )
{
	LinkedList<int> list;
	list.addFirst(10);
	list.addFirst(20);
	list.addFirst(30);
	list.printRecord();
	return 0;
}
