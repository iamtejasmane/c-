#include<stdio.h>
#include"../include/Employee.h"
#include"../include/IOOperation.h"
enum IOOperation menu_list( void )
{
	enum IOOperation choice;
	printf("0.Exit\n");
	printf("1.Accept Record\n");
	printf("2.print Record\n");
	printf("Enter choice	:	");
	scanf("%d",&choice);
	return choice;
}
int main( void )
{
	enum IOOperation choice;
	struct Employee emp;
	while( ( choice = menu_list( ) ) != EXIT )
	{
		switch( choice )
		{
		case ACCEPT:
			accept_record(&emp);
			break;
		case PRINT:
			print_record(&emp);
			break;
		}
	}
	return 0;
}
