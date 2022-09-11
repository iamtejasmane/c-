#include<iostream>
using namespace std;
class A
{
private:
	int num1;
public:
	A( void )
	{
		//cout<<"A( void )"<<endl;
		this->num1 = 10;
	}
	A( int num1 )
	{
		//cout<<"A( int num1 )"<<endl;
		this->num1 = num1;
	}
	void printRecord( void )
	{
		//cout<<"Num1	:	"<<this->num1<<endl;
		this->showRecord( );
	}
	~A( void )
	{
		//cout<<"~A( void )"<<endl;
	}
protected:
	void showRecord( void )
	{
		cout<<"Num1	:	"<<this->num1<<endl;
	}
};
class B : public A
{
private:
	int num2;
public:
	B( void )
	{
		//cout<<"B( void )"<<endl;
		this->num2 = 20;
	}
	B( int num2 )
	{
		//cout<<"B( int num2 )"<<endl;
		this->num2 = num2;
	}
	B( int num1, int num2 ) : A( num1 )
	{
		//cout<<"B( int num1, int num2 )"<<endl;
		this->num2 = num2;
	}
	void printRecord( void )
	{
		A::showRecord();		//num1
		this->showRecord();		//num2
	}
	~B( void )
	{
		//cout<<"~B( void )"<<endl;
	}
protected:
	void showRecord( void )
	{
		cout<<"Num2	:	"<<this->num2<<endl;
	}
};
class C : public A
{
private:
	int num3;
public:
	C( void )
	{
		//cout<<"C( void )"<<endl;
		this->num3 = 30;
	}
	C( int num3 )
	{
		//cout<<"C( int num3 )"<<endl;
		this->num3 = num3;
	}
	C( int num1, int num3 ) : A( num1 )
	{
		//cout<<"C( int num1, int num3 )"<<endl;
		this->num3 = num3;
	}
	void printRecord( void )
	{
		A::showRecord();	//num1;
		this->showRecord();	//num3

	}
	~C( void )
	{
		//cout<<"~C( void )"<<endl;
	}
protected:
	void showRecord( void )
	{
		cout<<"Num3	:	"<<this->num3<<endl;
	}
};
class D : public B , public C
{
private:
	int num4;
public:
	D( void )
	{
		//cout<<"D( void )"<<endl;
		this->num4 = 40;
	}
	D( int num1, int num2, int num3, int num4 ) : B( num1, num2 ), C( num1, num3 )
	{
		//cout<<"D( int num1, int num2, int num3, int num4 )"<<endl;
		this->num4 = num4;
	}
	void printRecord( void )
	{
		A::showRecord();	//Ambiguity Error
		B::showRecord();	//num2
		C::showRecord();	//num3
		cout<<"Num4	:	"<<this->num4<<endl;	//num4;
	}
	~D( void )
	{
		//cout<<"~D( void )"<<endl;
	}
};
int main( void )
{
	A a;
	a.printRecord();	//num1;
	cout<<endl;

	B b;
	b.printRecord();	//num1, num2
	cout<<endl;

	C c;
	c.printRecord();	//num1, num3
	cout<<endl;

	D d;
	d.printRecord();	//num1, num2, num3, num4
	return 0;
}
