#include<stdio.h>
#include"../include/Employee.h"
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
