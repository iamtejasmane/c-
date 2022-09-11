#include<iostream>
using namespace std;
class Array
{
private:
	int size;
	int *arr;
public:
	Array( void )
	{
		this->size = 0;
		this->arr = NULL;
	}
	Array( int size )
	{
		this->size = size;
		this->arr = new int[ size ];
	}
	void acceptRecord( void )
	{
		for( int index = 0; index < this->size; ++ index )
		{
			cout<<"Enter element	:	";
			cin>>this->arr[ index ];
		}
	}
	void printRecord( void )
	{
		for( int index = 0; index < this->size; ++ index )
			cout<<this->arr[ index ]<<endl;
	}
	~Array( void )
	{
		if( this->arr != NULL )
		{
			delete[] this->arr;
			this->arr = NULL;
		}
	}
};
class AutoPointer
{
private:
	Array *ptr;
public:
	AutoPointer( Array *ptr )
	{
		this->ptr = ptr;
	}
	Array* operator->( )
	{
		return this->ptr;
	}
	~AutoPointer( void )
	{
		delete this->ptr;
	}
};
int main( void )
{
	auto_ptr<Array> obj( new Array(5));
	obj->acceptRecord();
	obj->printRecord();
	return 0;
}
int main4( void )
{
	AutoPointer obj( new Array( 3 ) );
	obj->acceptRecord( );
	//obj.operator ->()->acceptRecord();
	obj->printRecord( );
	//obj.operator ->()->printRecord();
	return 0;
}

int main3( void )
{
	Array a1(3);
	a1.acceptRecord( );
	a1.printRecord( );
	return 0;
}
int main2( void )
{
	Array *ptr = new Array(  );
	ptr->acceptRecord( );
	ptr->printRecord( );
	delete ptr;
	return 0;
}
int main1( void )
{
	Array a1;
	a1.acceptRecord( );
	a1.printRecord( );
	return 0;
}
