#include<cstring>
#include<iostream>
using namespace std;
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
	//const Array &other = a1
	//Array *const this = &a2
	/*Array( const Array &other )
	{
		//Step 1 : Copy the size
		this->size = other.size;
		//Step 2 : Allocate new resource
		this->arr = new int[ this->size ];
		//Step 3 : Copy the contents
		memcpy(this->arr, other.arr, this->size * sizeof(int));

		//for( int index = 0; index < this->size; ++ index )
			//this->arr[ index ] = other.arr[ index ];
	}*/
	//const Array &other = a1
	//Array *const this = &a2
	Array( const Array &other ) : size( other.size ), arr( new int[ this->size ] )
	{
		memcpy(this->arr, other.arr, this->size * sizeof(int));
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
	a1.acceptRecord();
	Array a2 = a1;
	a2.printRecord();
	return 0;
}
