#include<cstdlib>
#include<iostream>
using namespace std;
class Complex
{
private:
	int real;
	int imag;
public:
	Complex( void )
	{
		cout<<"Complex( void )"<<endl;
		this->real = 0;
		this->imag = 0;
	}
	void acceptRecord( void )
	{
		cout<<"Real Number	:	";
		cin>>this->real;
		cout<<"Imag Number	:	";
		cin>>this->imag;
	}
	void printRecord( void )
	{
		cout<<"Real Number	:	"<<this->real<<endl;
		cout<<"Imag Number	:	"<<this->imag<<endl;
	}
	~Complex( void )
	{
		cout<<"~Complex( void )"<<endl;
	}
};
int main( void )
{
	Complex *ptr = ( Complex* )malloc( sizeof( Complex ) );
	ptr->acceptRecord();
	ptr->printRecord();
	free( ptr );
	return 0;
}
int main6(void )
{
	int *ptr = NULL;
	ptr = ( int* )calloc(3, sizeof( int ) );
	if( ptr != NULL )
	{
		cout<<"ptr	:	"<<ptr<<endl;
		ptr[ 0 ] = 10;
		ptr[ 1 ] = 20;
		ptr[ 2 ] = 30;
		for( int index = 0; index < 3; ++ index )
			cout<<ptr[ index ]<<endl;
		//void* realloc( void *ptr, size_t size );
		ptr = ( int* )realloc(ptr, 5 * sizeof(int) );
		if( ptr != NULL )
		{
			cout<<"ptr	:	"<<ptr<<endl;
			ptr[ 3 ] = 40;
			ptr[ 4 ] = 50;
			for( int index = 0; index < 5; ++ index )
				cout<<ptr[ index ]<<endl;
			free( ptr );
			ptr = NULL;
		}
		else
			cout<<"Bad memory allocation"<<endl;
	}
	else
		cout<<"Bad memory allocation"<<endl;
	return 0;
}
int main5( void )
{
	int **ptr = ( int** )calloc( 4, sizeof( int* ) );
	if( ptr != NULL )
	{
		for( int index = 0; index < 4; ++ index )
			ptr[ index ] = ( int* )calloc( 3, sizeof( int ) );
	}

	for( int row = 0; row < 4; ++ row )
	{
		for( int col = 0; col < 3; ++ col )
		{
			cout<<"ptr[ "<<row<<" ][ "<<col<<" ]	:	";
			cin>>ptr[ row ][ col ];
		}
	}

	for( int row = 0; row < 4; ++ row )
	{
		for( int col = 0; col < 3; ++ col )
		{
			cout<<ptr[ row ][ col ]<<"	";
		}
		cout<<endl;
	}

	for( int index = 0; index < 4; ++ index )
		free( ptr[ index ] );
	free( ptr );
	ptr = NULL;
	return 0;
}
int main4( void )
{
	int *ptr = (int*)calloc( 3 , sizeof( int ) );	//Memory Allocation
	if( ptr != NULL )
	{
		for( int index = 0; index < 3; ++ index )
		{
			cout<<"Enter element	:	";
			cin>>ptr[ index ];
		}
		for( int index = 0; index < 3; ++ index )
			cout<<ptr[ index ]<<endl;

		free( ptr );	//Memory Deallocation
		ptr = NULL;
	}
	else
		cout<<"Bad memory allocation"<<endl;
	return 0;
}
int main3( void )
{
	//void* calloc( size_t count, size_t size );

	int *ptr = (int*)calloc( 1, sizeof( int ) );	//Memory Allocation
	if( ptr != NULL )
	{
		*ptr = 125;	//Dereferencing
		cout<<"Value	:	"<<*ptr<<endl;
		free( ptr );	//Memory Deallocation
		ptr = NULL;
	}
	else
		cout<<"Bad memory allocation"<<endl;
	return 0;
}
int main2( void )
{
	int *ptr = (int*)malloc(  3 * sizeof( int ) );	//Memory Allocation
	if( ptr != NULL )
	{
		for( int index = 0; index < 3; ++ index )
		{
			cout<<"Enter element	:	";
			cin>>ptr[ index ];
		}
		for( int index = 0; index < 3; ++ index )
			cout<<ptr[ index ]<<endl;

		free( ptr );	//Memory Deallocation
		ptr = NULL;
	}
	else
		cout<<"Bad memory allocation"<<endl;
	return 0;
}
int main1( void )
{
	//typedef unsigned long int size_t;
	//void* malloc( size_t size );

	int *ptr = (int*)malloc(  sizeof( int ) );	//Memory Allocation
	if( ptr != NULL )
	{
		*ptr = 125;	//Dereferencing
		cout<<"Value	:	"<<*ptr<<endl;
		free( ptr );	//Memory Deallocation
		ptr = NULL;
	}
	else
		cout<<"Bad memory allocation"<<endl;
	return 0;
}
