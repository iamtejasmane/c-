#include<cstring>
#include<iostream>
using namespace std;

#define size	3
class Array
{
private:
	int arr[ size ];
public:
	//Array *const this = &a1
	Array( void )
	{
		memset(this->arr, 0, size * sizeof(int));
	}
	//Array *const this = &a1
	void acceptRecord( void )
	{
		for( int index = 0; index < size; ++ index )
		{
			cout<<"Enter element	:	";
			cin>>this->arr[ index ];
		}
	}//Array *const this = &a1
	void printRecord( void )
	{
		for( int index = 0; index < size; ++ index )
			cout<<this->arr[ index ]<<endl;
	}
};
int main( void )
{
	Array a1;
	a1.acceptRecord( );	//a1.acceptRecord( &a1 );
	a1.printRecord( );	//a1.printRecord( &a1 );
	return 0;
}
