#include<iostream>
#include<string>
using namespace std;
class Person
{
private:
	string name;	//24 bytes
	int age;		//4 bytes
public:
	Person( void )
	{
		cout<<"Person( void )"<<endl;
		this->name = "";
		this->age = 0;
	}
	Person( string name, int age )
	{
		cout<<"Person( string name, int age )"<<endl;
		this->name = name;
		this->age = age;
	}
	void showRecord( void )
	{
		cout<<"Name	:	"<<this->name<<endl;
		cout<<"Age	:	"<<this->age<<endl;
	}
	~Person( void )
	{
		cout<<"~Person( void )"<<endl;
	}
};
class Employee : public Person
{
private:
	int empid;		//4 bytes
	float salary;   //4 bytes
public:
	Employee( void )
	{
		cout<<"Employee( void )"<<endl;
		this->empid = 0;
		this->salary = 0;
	}
	Employee( int empid, float salary )
	{
		cout<<"Employee( int empid, float salary )"<<endl;
		this->empid = empid;
		this->salary = salary;
	}
	Employee( string name, int age ) : Person(name, age)
	{
		cout<<"Employee( string name, int age )"<<endl;
		this->empid = 0;
		this->salary = 0;
	}
	Employee( string name, int age, int empid, float salary ) : Person(name, age)
	{
		cout<<"Employee( string name, int age, int empid, float salary )"<<endl;
		this->empid = empid;
		this->salary = salary;
	}
	//Employee *const this = &emp
	void displayRecord( void )
	{
		this->showRecord();
		cout<<"Empid	:	"<<this->empid<<endl;
		cout<<"Salary	:	"<<this->salary<<endl;
	}
	~Employee( void )
	{
		cout<<"~Employee( void )"<<endl;
	}
};
int main4( void )
{
	//Employee *ptr = new Employee( );
	Employee *ptr = new Employee( "ABC", 23, 35, 25000 );
	cout<<endl;
	delete ptr;
	return 0;
}
int main3( void )
{
	//Employee emp;
	Employee emp("Abc",23,43,25000);
	cout<<endl;
	return 0;
}
int main2( void )
{
	//Person *ptr = new Person(  );
	Person *ptr = new Person( "Abc", 23 );
	cout<<endl;
	delete ptr;
	return 0;
}
int main1( void )
{
	//Person p;
	Person p("Abc",23);
	cout<<endl;
	return 0;
}
