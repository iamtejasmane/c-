#include<iostream>
using namespace std;

class A
{
private:
	int number;
public:
	A( void ) : number( 10 )
	{	}
	int getNumber( void )
	{
		return this->number;
	}
};
class B : public A
{
public:
	void print( void )
	{
		//cout<<"Number	:	"<<this->number()<<endl;	//Not OK
		cout<<"Number	:	"<<this->getNumber()<<endl; //OK
	}
};
class C : public A
{
public:
	void print( void )
	{
		//cout<<"Number	:	"<<this->number()<<endl;	//Not OK
		cout<<"Number	:	"<<this->getNumber()<<endl;
	}
};

int main( void )
{
	B b;
	b.print();

	C c;
	c.print();
	return 0;
}
