#include<iostream>
using namespace std;
class Matrix
{
private:
	int row;
	int col;
	int **arr;
public:
	Matrix( void ) : row( 0 ), col( 0 ), arr( NULL )
	{	}
	Matrix( int row, int col ) : row( row ), col( col )
	{
		this->arr = new int*[ this->row ];
		for( int index = 0; index < this->row; ++ index )
			this->arr[ index ] = new int[ this->col ];
	}
	Matrix( const Matrix &other ) : row( other.row ), col( other.col )
	{
		this->arr = new int*[ this->row ];
		for( int index = 0; index < this->row; ++ index )
			this->arr[ index ] = new int[ this->col ];

		for( int row = 0; row < this->row; ++ row )
		{
			for( int col = 0; col < this->col; ++ col )
			{
				this->arr[ row ][ col ] = other.arr[ row ][ col ];
			}
		}
	}
	void acceptRecord( void )
	{
		for( int row = 0; row < this->row; ++ row )
		{
			for( int col = 0; col < this->col; ++ col )
			{
				cout<<"Enter element	:	";
				cin>>this->arr[ row ][ col ];
			}
		}
	}
	void printRecord( void )
	{
		for( int row = 0; row < this->row; ++ row )
		{
			for( int col = 0; col < this->col; ++ col )
				cout<<this->arr[ row ][ col ]<<"	";
			cout<<endl;
		}
	}
	int getElement( int row, int col )
	{
		return this->arr[ row ][ col ];
	}
	void setElement( int row, int col, int element )
	{
		this->arr[ row ][ col ] = element;
	}
	~Matrix( void )
	{
		if( this->arr != NULL )
		{
			for( int index = 0; index < this->row; ++ index )
				delete[] this->arr[ index ];
			delete[] this->arr;
			this->arr = NULL;
		}
	}
};
int main( void )
{
	Matrix m1(2,3);
	m1.acceptRecord( );

	Matrix m2 = m1;
	m2.printRecord();
	return 0;
}
