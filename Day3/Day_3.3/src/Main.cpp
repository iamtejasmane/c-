#include<stdio.h>
//class = Data Member + Member Function + Nested Type
class Employee
{
private:
	//Data Member / Field / Attribute/Property
	char name[ 30 ];	//30
	int empid;			//4
	float salary;		//4
public:
	//Member Function / Method / Operation / Behavior / Message
	void acceptRecord( void )
	{
		printf("Name	:	");
		scanf("%[^\n]%*c", name);
		printf("Empid	:	");
		scanf("%d", &empid);
		printf("Salary	:	");
		scanf("%f", &salary);
	}
	void printRecord( void )
	{
		printf("Name	:	%s\n", name);
		printf("Empid	:	%d\n", empid);
		printf("Salary	:	%.2f\n", salary);
	}
};
int main( void )
{
	Employee emp;
	emp.acceptRecord( );	//Message Passing
	emp.printRecord( );		//Message Passing
	return 0;
}
