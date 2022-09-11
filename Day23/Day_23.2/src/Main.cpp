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
		//cout<<"Person( void )"<<endl;
		this->name = "";
		this->age = 0;
	}
	Person( string name, int age )
	{
		//cout<<"Person( string name, int age )"<<endl;
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
		//cout<<"~Person( void )"<<endl;
	}
};
class Employee
{
private:
	string name;	//24 bytes
	int age;		//4 bytes
	int empid;		//4 bytes
	float salary;   //4 bytes
public:
	Employee( void )
	{
		//cout<<"Employee( void )"<<endl;
		this->name = "";
		this->age = 0;
		this->empid = 0;
		this->salary = 0;
	}
	Employee( string name, int age, int empid, float salary )
	{
		//cout<<"Employee( string name, int age, int empid, float salary )"<<endl;
		this->name = name;
		this->age = age;
		this->empid = empid;
		this->salary = salary;
	}
	void displayRecord( void )
	{
		cout<<"Name	:	"<<this->name<<endl;
		cout<<"Age	:	"<<this->age<<endl;
		cout<<"Empid	:	"<<this->empid<<endl;
		cout<<"Salary	:	"<<this->salary<<endl;
	}
	~Employee( void )
	{
		//cout<<"~Employee( void )"<<endl;
	}
};
int main( void )
{
	Employee emp("Sandeep",36,33,123456);
	emp.displayRecord();
	return 0;
}
int main1( void )
{
	Person p("Sandeep", 36);
	p.showRecord( );
	//p.Person::showRecord( );
	return 0;
}
