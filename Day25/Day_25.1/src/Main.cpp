#include<iostream>
using namespace std;
class Base
{
private:
	int num1;
	int num2;
public:
	Base( void )
	{
		this->num1 = 10;
		this->num2 = 20;
	}
	Base( int num1, int num2 )
	{
		this->num1 = num1;
		this->num2 = num2;
	}
	void showRecord( void )
	{
		cout<<"Num1	:	"<<this->num1<<endl;
		cout<<"Num2	:	"<<this->num2<<endl;
	}
	void printRecord( void )
	{
		cout<<"Num1	:	"<<this->num1<<endl;
		cout<<"Num2	:	"<<this->num2<<endl;
	}
};
class Derived : public Base
{
private:
	int num3;
public:
	Derived( void )
	{
		this->num3 = 30;
	}
	Derived( int num1, int num2, int num3 ) : Base( num1, num2 )
	{
		this->num3 = num3;
	}
	void printRecord( void )
	{
		Base::printRecord();
		cout<<"Num3	:	"<<this->num3<<endl;
	}
	void displayRecord( void )
	{
		Base::showRecord();
		cout<<"Num3	:	"<<this->num3<<endl;
	}
};
int main( void )
{
	Derived d1;
	Base &b1 = d1;	//Base * const b1 = &d2; //Upcasting
	//b1.printRecord();	//Base::printRecord

	Derived &d2 = (Derived&)b1;	//Downcasting
	d2.printRecord(); //Derived::printRecord
	return 0;
}
int main10( void )
{
	Derived d1;
	Derived &d2  = d1;	//Derived *const d2 = &d1
	Base &b1 = d2;	//Base * const b1 = d2; //Upcasting
	b1.printRecord();
	return 0;
}
int main9( void )
{
	Base *ptrBase = new Derived();	//Upcasting : OK
	//ptrBase->printRecord(); //Base::printRecord

	Derived *ptrDerived = ( Derived* )ptrBase;	//Downcasting : OK
	ptrDerived->printRecord();
	delete ptrBase;
	return 0;
}
int main8( void )
{
	Derived *ptrDerived = new Derived( );
	//ptrDerived->printRecord(); //Derived::printRecord
	//Base *ptrBase = (Base*)ptrDerived;	//Upcasting : OK
	Base *ptrBase = ptrDerived;	//Upcasting : OK
	ptrBase->printRecord(); //Base::printRecord
	delete ptrDerived;
	return 0;
}
int main7( void )
{
	Derived derived(50,60,70);
	Base base;
	base = derived;	//Object Slicing
	base.printRecord();	//Base::printRecord
	return 0;
}
int main6( void )
{
	Derived d1( 50,60,70), d2;
	d2 = d1;
	d2.printRecord();	//Derived::printRecord( )
	return 0;
}
int main5( void )
{
	Base b1(50,60);
	Base b2 = b1;
	b2.printRecord();	//Base::printRecord( )
	return 0;
}
int main4( void )
{
	Derived *ptrDerived = new Derived( );
	//ptrDerived->showRecord( );	//Base::showRecord
	//ptrDerived->printRecord( );	//Derived::printRecord
	//ptrDerived->Base::printRecord(); //Base::printRecord
	//ptrDerived->displayRecord( ); //Derived::displayRecord
	delete ptrDerived;
	return 0;
}
int main3( void )
{
	Derived derived;
	//derived.showRecord( );	//Base::showRecord
	//derived.printRecord( );	//Derived::printRecord
	//derived.Base::printRecord(); //Base::printRecord
	//derived.displayRecord( ); //Derived::displayRecord
	return 0;
}
int main2( void )
{
	Base *ptrBase = new Base( );
	//ptrBase->showRecord();	//Base::showRecord
	//ptrBase->printRecord();	//Base::printRecord
	//ptrBase->Derived::printRecord();	//Not OK
	//ptrBase->displayRecord();	//Not OK
	delete ptrBase;
	return 0;
}
int main1( void )
{
	Base base;
	//base.showRecord();	//Base::showRecord
	//base.printRecord();	//Base::printRecord
	//base.Derived::printRecord();	//Not OK
	//base.displayRecord();	//Not OK
	return 0;
}
