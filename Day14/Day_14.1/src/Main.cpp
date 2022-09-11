#include<iostream>
using namespace std;
int main( void )
{
	int *p1 = new int[ 3 ];
	p1[ 0 ] = 10;
	p1[ 1 ] = 20;
	p1[ 2 ] = 30;

	int *p2 = p1;
	for( int index = 0; index < 3; ++ index )
		cout<<p2[ index ]<<endl;

	delete[] p2;
	p2 = NULL;

	delete[] p1;	//p1 is dangling pointer : //double free detected
	//pointer being freed was not allocated

	p2 = NULL;
	return 0;
}
int main1( void )
{
	int *ptr = NULL;

	ptr = new int[ 2 ];
	ptr[ 0 ] = 10;
	ptr[ 1 ] = 20;

	ptr = new int[ 3 ];
	ptr[ 0 ] = 10;
	ptr[ 1 ] = 20;
	ptr[ 2 ] = 30;
	for( int index = 0; index < 3; ++ index )
		cout<<ptr[ index ] <<endl;

	delete[] ptr;
	ptr = NULL;

	return 0;
}
