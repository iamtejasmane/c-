#include<stdio.h>
#include"../include/Employee.h"

void Employee::acceptRecord( void )
{
	printf("Name	:	");
	scanf("%[^\n]%*c", name);
	printf("Empid	:	");
	scanf("%d", &empid);
	printf("Salary	:	");
	scanf("%f", &salary);
}
void Employee::printRecord( void )
{
	printf("Name	:	%s\n", name);
	printf("Empid	:	%d\n", empid);
	printf("Salary	:	%.2f\n", salary);
}
