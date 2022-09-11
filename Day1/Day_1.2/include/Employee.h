#ifndef EMPLOYEE_H_
#define EMPLOYEE_H_

//Global Structure Declaration
struct Employee
{
	char name[ 30 ];
	int empid ;
	float salary;
};

void accept_record( struct Employee *ptr );
void print_record( struct Employee *ptr );

#endif /* EMPLOYEE_H_ */
