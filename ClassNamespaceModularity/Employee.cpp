#include<iostream>

using namespace std;

#include"./include/Employee.h"

using namespace kdac;

void Employee::initEmployee(void) 
{
    name = "";
    empid=  0;
    salary = 0;
}

void Employee::acceptRecord(void)
{
    cout<<"Name	:	";
	cin>> name;
	cout<<"Empid	:	";
	cin>>empid;
	cout<<"Salary	:	";
	cin>>salary;
}

void Employee::printRecord(void)
{
    cout<<"Name	:	"<<name<<endl;
	cout<<"Empid	:	"<<empid<<endl;
	cout<<"Salary	:	"<<salary<<endl;
}