#include<iostream>
#include<string>
using namespace std;

namespace kdac
{
	class Employee
	{
	private:
		string name;
		int empid;
		float salary;
	public:
		void initEmployee( void )
		{
			name = "";
			empid = 0;
			salary = 0;
		}
		void acceptRecord( void )
		{
			cout<<"Name	:	";
			cin>> name;
			cout<<"Empid	:	";
			cin>>empid;
			cout<<"Salary	:	";
			cin>>salary;
		}
		void printRecord( void )
		{
			cout<<"Name	:	"<<name<<endl;
			cout<<"Empid	:	"<<empid<<endl;
			cout<<"Salary	:	"<<salary<<endl;
		}
	};
}
int main( void )
{
	using namespace kdac;
	Employee emp;
	emp.initEmployee( );
	emp.acceptRecord( );
	emp.printRecord( );
	return 0;
}
