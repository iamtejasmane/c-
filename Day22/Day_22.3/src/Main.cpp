#include<iostream>
using namespace std;
class
{
public:
	void showRecord( void )
	{
		cout<<"void showRecord( void )"<<endl;
	}
	static void displayRecord( void )
	{
		cout<<"void displayRecord( void )"<<endl;
	}
}t1;
int main( void )
{
	t1.showRecord( );	//OK : void showRecord( void )
	//displayRecord( ); //Not OK
	//::displayRecord( ); //Not OK
	t1.displayRecord( ); //OK : void displayRecord( void )
	return 0;
}
