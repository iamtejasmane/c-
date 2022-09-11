#include<stdio.h>
struct Employee
{
//private:
	char name[ 30 ];	//30
	int empid;			//4
	float salary;		//4
//public:
	void accept_record( void )
	{
		printf("Name	:	");
		scanf("%[^\n]%*c", name);
		printf("Empid	:	");
		scanf("%d", &empid);
		printf("Salary	:	");
		scanf("%f", &salary);
	}
	void print_record( void )
	{
		printf("Name	:	%s\n", name);
		printf("Empid	:	%d\n", empid);
		printf("Salary	:	%.2f\n", salary);
	}
};
int main( void )
{
	Employee emp;
	emp.accept_record( );	//emp.accept_record( &emp );
	emp.salary = -50000;
	emp.print_record( );	//emp.print_record( &emp );
	return 0;
}
