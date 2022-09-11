#include<iostream>
#include<string>
using namespace std;
class Date
{
private:
	int day;
	int month;
	int year;
public:
	Date( void ) : day( 0 ), month( 0 ), year( 0 )
	{	}
	Date( int day, int month, int year ) : day( day ), month( month ), year( year )
	{	}
	void accceptRecord( void )
	{
		cout<<"Day	:	";
		cin>>this->day;
		cout<<"Month	:	";
		cin>>this->month;
		cout<<"Year	:	";
		cin>>this->year;
	}
	void printRecord( void )
	{
		cout<<this->day<<" / "<<this->month<<" / "<<this->year<<endl;
	}
};
class Employee
{
private:
	string name;
	int empid;
	float salary;
	Date joinDate;
public:
	Employee( void ) : name( "" ), empid( 0 ), salary( 0 )
	{	}
	Employee( string name, int empid, float salary, Date joinDate ) : name( name ), empid( empid ), salary( salary ), joinDate( joinDate )
	{	}
	Employee( string name, int empid, float salary, int day, int month, int year ) : name( name ), empid( empid ), salary( salary ), joinDate( day, month, year )
	{	}
	void acceptRecord( void )
	{
		cout<<"Name	:	";
		cin>>this->name;
		cout<<"Empid	:	";
		cin>>this->empid;
		cout<<"Salary	:	";
		cin>>this->salary;
		cout<<"JoinDate:"<<endl;
		this->joinDate.accceptRecord();
	}
	void printRecord( void )
	{
		cout<<"Name	:	"<<this->name<<endl;
		cout<<"Empid	:	"<<this->empid<<endl;
		cout<<"Salary	:	"<<this->salary<<endl;
		cout<<"JoinDate	:	";
		this->joinDate.printRecord();
	}
};
int main( void )
{
	Employee emp("Sandeep",33,45000,12,3,2003);
	//emp.acceptRecord();
	emp.printRecord();
	return 0;
}
