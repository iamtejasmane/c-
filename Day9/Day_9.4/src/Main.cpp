#include<iostream>
using namespace std;

#define SIZE	3
class Array
{
private:
	int arr[ SIZE ];
public:
	Array( void )
	{
		for( int index = 0; index < SIZE; ++ index )
			this->arr[ index ] = 0;
	}
	void acceptRecord( )
	{
		for( int index = 0; index < SIZE; ++ index )
		{
			cout<<"Enter element	:	";
			cin>>this->arr[ index ];
		}
	}
	int getElement( int index )
	{
		return this->arr[ index ];
	}
	void setElement( int index, int element )
	{
		this->arr[ index ] = element;
	}
	void printRecord( )
	{
		for( int index = 0; index < SIZE; ++ index )
			cout<<this->arr[ index ]<<endl;
	}
};
void accept_record( Array *ptr )
{
	int element;
	for( int index = 0; index < SIZE; ++ index )
	{
		cout<<"Enter element	:	";
		cin>>element;
		ptr->setElement( index, element );
	}
}
void print_record( Array *ptr )
{
	for( int index = 0; index < SIZE; ++ index )
		cout<<ptr->getElement(index)<<endl;
}
int main( void )
{
	Array a1;

	accept_record( &a1 );

	print_record( &a1 );

	return 0;
}
int main2( void )
{
	int element;
	Array a1;
	for( int index = 0; index < SIZE; ++ index )
	{
		cout<<"Enter element	:	";
		cin>>element;
		a1.setElement( index, element );
	}

	for( int index = 0; index < SIZE; ++ index )
		cout<<a1.getElement(index)<<endl;

	return 0;
}

int main1( void )
{
	Array a1;
	//a1.acceptRecord( );
	a1.setElement( 0, 10 );
	a1.setElement( 1, 20 );
	a1.setElement( 2, 30 );


	//a1.printRecord( );
	int element = 0;
	element = a1.getElement( 0 );
	cout<<element<<endl;
	element = a1.getElement( 1 );
	cout<<element<<endl;
	element = a1.getElement( 2 );
	cout<<element<<endl;
	return 0;
}
