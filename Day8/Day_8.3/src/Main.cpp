#include<iostream>
using namespace std;

#include"../include/Complex.h"
using namespace kdac;

void accept_record( Complex *ptr )
{
	int real;
	cout<<"Real Number	:	";
	cin>>real;
	ptr->setReal( real );
	int imag;
	cout<<"Imag Number	:	";
	cin>>imag;
	ptr->setImag( imag );
}
void print_record( Complex *ptr )
{
	int real = ptr->getReal( );
	cout<<"Real Number	:	"<<real<<endl;
	int imag = ptr->getImag( );
	cout<<"Imag Number	:	"<<imag<<endl;
}
int menu_list( void )
{
	int choice;
	cout<<"0.Exit"<<endl;
	cout<<"1.Accept Record"<<endl;
	cout<<"2.Print Record"<<endl;
	cout<<"Enter choice	:	";
	cin>>choice;
	return choice;
}
int main( void )
{
	int choice;
	Complex c1;
	c1.initComplex(0, 0);
	while( ( choice = ::menu_list( ) ) != 0 )
	{
		switch( choice )
		{
		case 1:
			::accept_record( &c1 );
			break;
		case 2:
			::print_record(&c1);
			break;
		}
	}
	return 0;
}
int main1( void )
{
	Complex c1;
	c1.initComplex( 0, 	0 );	//c1.initComplex( &c1, 0, 0 );

	accept_record( &c1 );

	print_record( &c1 );
	return 0;
}
