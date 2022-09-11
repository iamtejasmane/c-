#include<iostream>
using namespace std;

//int &x = a;
//int &y = b
void swap( int &x, int &y )//void swap( int *const x, int *const y )
{
	int temp = x;	//int temp = *x;
	x = y;			//*x = *y;
	y = temp;		//*y = temp;
}
int main( void )
{
	int a = 10;
	int b = 20;
	swap( a, b );
	cout<<"a	:	"<<a<<endl;
	cout<<"b	:	"<<b<<endl;
	return 0;
}
int main8( void )
{
	int arr1[ 3 ] = { 10, 20, 30 };
	int (&arr2)[ 3 ] = arr1;

	for( int index = 0; index < 3; ++ index )
		cout<<arr2[ index ]<<endl;
	return 0;
}
int main7( void )
{
	int number = 10;
	int *p1 = &number;
	int *&p2 = p1;

	cout<<&p1<<endl;
	cout<<&p2<<endl;
	return 0;
}
class Test
{
private:
	char &ch1;
public:
	Test( char &ch2 ) : ch1( ch2  )
	{	}
};
int main6( void )
{
	char ch3 = 'A';
	Test t(ch3);
	size_t size =  sizeof( t );
	cout<<"Size	:	"<<size<<endl;
	return 0;
}
int main5( void )
{
	int num1 = 10;
	int num2 = 20;
	int &num3 = num1;
	num3 = num2;
	++ num3;

	cout<<"Num1	:	"<<num1<<endl;
	cout<<"Num2	:	"<<num2<<endl;
	cout<<"Num3	:	"<<num3<<endl;
	return 0;
}
int main4( void )
{
	int num1 = 10;
	int &num2 = num1;
	int &num3 = num2;


	cout<<"Num1	:	"<<num1<<endl;
	cout<<"Num2	:	"<<num2<<endl;
	cout<<"Num3	:	"<<num3<<endl;	//OK
	return 0;
}
int main3( void )
{
	int num1 = 10;
	int &num2 = num1;
	const int &num3 = num1;

	++ num1;
	++ num2;
	//++ num3;	//Not OK

	cout<<"Num1	:	"<<num1<<endl;
	cout<<"Num2	:	"<<num2<<endl;
	cout<<"Num3	:	"<<num3<<endl;	//OK
	return 0;
}
int main2( void )
{
	int num1 = 10;
	int &num2 = num1;

	++ num1;
	++ num2;

	cout<<"Num1	:	"<<num1<<endl;
	cout<<"Num2	:	"<<num2<<endl;
	return 0;
}

int main1( void )
{
	int num1 = 10;
	int &num2 = num1;
	//int &num2 = 10;	//Not OK

	//num2 => Reference Variable
	//num1 => Referent  Variable

	cout<<"Num1	:	"<<num1<<"	"<<&num1<<endl;
	cout<<"Num2	:	"<<num2<<"	"<<&num2<<endl;
	return 0;
}
