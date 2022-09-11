#include<iostream>
using namespace std;
class B
{
public:
	void sum( void );
	void sub( void );
	void multiplication( void );
	void division( void );
};
class A
{
private:
	int num1;
	int num2;
public:
	A( int num1 = 0, int num2 = 0 );
	/*friend void B::sum( void );
	friend void B::sub( void );
	friend void B::multiplication( void );
	friend void B::division( void );*/
	friend class B;
};
A::A( int num1, int num2 )
{
	this->num1 = num1;
	this->num2 = num2;
}
void B::sum( void )
{
	A obj(10,20);
	int result = obj.num1 + obj.num2;
	cout<<"Result	:	"<<result<<endl;
}
void B::sub( void )
{
	A obj(10,20);
	int result = obj.num1 - obj.num2;
	cout<<"Result	:	"<<result<<endl;
}
void B::multiplication( void )
{
	A obj(10,20);
	int result = obj.num1 * obj.num2;
	cout<<"Result	:	"<<result<<endl;
}
void B::division( void )
{
	A obj(10,20);
	int result = obj.num1 / obj.num2;
	cout<<"Result	:	"<<result<<endl;
}
int main( void )
{
	B obj;
	obj.sum();
	obj.sub();
	obj.multiplication();
	obj.division();
	return 0;
}
