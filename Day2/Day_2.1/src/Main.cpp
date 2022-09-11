#include<stdio.h>
#include<string.h>

struct Account
{
	char name[ 50 ];
	int number;
	char type[ 50 ];
	float balance;
};
int count = 1000;
struct Bank
{
	int index;
	struct Account arr[ 5 ];
};
void accept_account_info( struct Account *ptrAccount )
{
	printf("Name	:	");
	scanf("%s", ptrAccount->name );
	printf("Type	:	");
	scanf("%s", ptrAccount->type );
	printf("Balance	:	");
	scanf("%f", &ptrAccount->balance );
}
int create_account( struct Bank *ptrBank, struct Account account )
{
	account.number = ++ count;
	ptrBank->arr[ ++ ptrBank->index ] = account;
	return account.number;
}
float deposit( struct Bank *ptrBank, int number, float amount )
{
	for( int index = 0; index <= ptrBank->index; ++ index )
	{
		if( ptrBank->arr[ index ].number == number  )
		{
			ptrBank->arr[ index ].balance += amount;
			return ptrBank->arr[ index ].balance;
		}
	}
	return 0;
}
float withdraw( struct Bank *ptrBank, int number, float amount )
{
	for( int index = 0; index <= ptrBank->index; ++ index )
	{
		if( ptrBank->arr[ index ].number == number  )
		{
			ptrBank->arr[ index ].balance -= amount;
			return ptrBank->arr[ index ].balance;
		}
	}
	return 0;
}
struct Account get_account_details( struct Bank *ptrBank, int number )
{
	struct Account account = { };
	for( int index = 0; index <= ptrBank->index; ++ index )
	{
		if( ptrBank->arr[ index ].number == number  )
		{
			account = ptrBank->arr[ index ];
		}
	}
	return account;
}
void print_account_info( struct Account *ptrAccount )
{
	printf("%-20s%-5d%-10s%-10.2f\n", ptrAccount->name, ptrAccount->number, ptrAccount->type, ptrAccount->balance);
}
void accept_account_number( int *number )
{
	printf("Account number	:	");
	scanf("%d", number );
}
void accept_amount( float *amount )
{
	printf("Amount	:	");
	scanf("%f", amount );
}
void print_account_number( int number )
{
	printf("Account number	:	%d\n", number);
}
void print_balance( float balance )
{
	printf("Balance	:	%f\n", balance );
}
int menu_list( void )
{
	int choice;
	printf("0.Exit\n");
	printf("1.Create New Account\n");
	printf("2.Deposit\n");
	printf("3.Withdraw\n");
	printf("4.Print Account details\n");
	printf("Enter choice	:	");
	scanf("%d",&choice);
	return choice;
}
int main( void )
{
	int choice, accNumber;
	float balance, amount;
	struct Bank bank = { -1 };
	bank.arr[ 0 ].balance = 100000;
	struct Account account;
	while( ( choice = menu_list( ) ) )
	{
		switch( choice )
		{
		case 1:
			accept_account_info(&account);
			accNumber = create_account(&bank, account);
			print_account_number(accNumber);
			break;
		case 2:
			accept_account_number(&accNumber);
			accept_amount( &amount );
			balance = deposit(&bank, accNumber, amount );
			print_balance(balance);
			break;
		case 3:
			accept_account_number(&accNumber);
			accept_amount(&amount );
			balance = withdraw(&bank, accNumber, amount );
			print_balance(balance);
			break;
		case 4:
			accept_account_number(&accNumber);
			account = get_account_details(&bank, accNumber);
			print_account_info(&account);
			break;
		}
	}
	return 0;
}
int main1( void )
{
	struct Bank bank = { -1 };

	struct Account account;
	accept_account_info( &account );
	int accNumber = create_account( &bank, account );
	printf("%d\n",accNumber);


	//float balance  = deposit( &bank, 1001, 15000 );
	float balance  = withdraw( &bank, 1001, 15000 );
	printf("Balance	:	%f\n", balance );


	account = get_account_details( &bank, 1001 );
	print_account_info( &account );
	return 0;
}
