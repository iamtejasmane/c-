#include<stdio.h>
#include<stdlib.h>
#include<string.h>

//Global Structure Declaration
struct Employee
{
	char name[ 30 ];
	int empid ;
	float salary;
};
void accept_record( struct Employee *ptr )
{
	printf("Name	:	");
	scanf("%s",ptr->name);
	printf("Empid	:	");
	scanf("%d", &ptr->empid);
	printf("Salary	:	");
	scanf("%f", &ptr->salary);
}
void print_record( struct Employee *ptr )
{
	printf("Name	:	%s\n", ptr->name );
	printf("Empid	:	%d\n", ptr->empid );
	printf("Salary	:	%f\n", ptr->salary );
}
int menu_list( void )
{
	int choice;
	printf("0.Exit\n");
	printf("1.Accept Record\n");
	printf("2.print Record\n");
	printf("Enter choice	:	");
	scanf("%d",&choice);
	return choice;
}
int main( void )
{
	int choice;
	struct Employee emp;
	while( ( choice = menu_list( ) ) != 0 )
	{
		switch( choice )
		{
		case 1:
			accept_record(&emp);
			break;
		case 2:
			print_record(&emp);
			break;
		}
	}
	return 0;
}
int main7( void )
{

	struct Employee emp;

	accept_record( &emp );

	print_record( &emp );

	return 0;
}
int main6( void )
{
	struct Employee *ptr = ( struct Employee* )malloc( sizeof( struct Employee ) );

	accept_record( ptr );

	print_record( ptr );

	free( ptr );
	return 0;
}
int main5( void )
{
	//Local Structure Declaration
	struct Employee
	{
		char name[ 30 ];
		int empid ;
		float salary;
	};
	struct Employee *ptr = ( struct Employee* )malloc( sizeof( struct Employee ) );

	printf("Name	:	");
	scanf("%s",ptr->name);
	printf("Empid	:	");
	scanf("%d", &ptr->empid);
	printf("Salary	:	");
	scanf("%f", &ptr->salary);

	printf("Name	:	%s\n", ptr->name );
	printf("Empid	:	%d\n", ptr->empid );
	printf("Salary	:	%f\n", ptr->salary );

	free( ptr );
	return 0;
}
int main4( void )
{
	//Local Structure Declaration
	struct Employee
	{
		char name[ 30 ];
		int empid ;
		float salary;
	};
	struct Employee emp;
	strcpy( emp.name, "Rahul") ;
	emp.empid = 33;
	emp.salary = 35000;

	printf("Name	:	%s\n", emp.name );
	printf("Empid	:	%d\n", emp.empid );
	printf("Salary	:	%f\n", emp.salary );
	return 0;
}
int main3( void )
{
	//Local Structure Declaration
	struct Employee
	{
		char name[ 30 ];
		int empid ;
		float salary;
	};
	//Type 		: struct Employee
	//Object 	: emp
	struct Employee emp = { "Rahul", 14, 35000 };

	printf("Name	:	%s\n", emp.name );
	printf("Empid	:	%d\n", emp.empid );
	printf("Salary	:	%f\n", emp.salary );
	return 0;
}
int main2( void )
{
	char name[ 30 ];
	int empid;
	float salary;

	//name = "Sandeep";	//NOT OK
	strcpy(name, "Sandeep");
	empid = 13;
	salary = 45000.50f;

	printf("Name	:	%s\n", name );
	printf("Empid	:	%d\n", empid );
	printf("Salary	:	%f\n", salary );
	return 0;
}
int main1( void )
{
	char name[ 30 ] = "Sandeep";
	int empid = 13;
	float salary = 45000.50f;

	printf("Name	:	%s\n", name );
	printf("Empid	:	%d\n", empid );
	printf("Salary	:	%f\n", salary );
	return 0;
}
