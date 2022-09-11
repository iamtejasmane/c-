#include<iostream>
using namespace std;
class Test
{
private:
	int num1;
	static int num2;
public:
	Test( void ) : num1( 10 ){	}

	void showRecord( void )
	{
		cout<<"Num1	:	"<<num1<<endl;	//OK
		cout<<"Num2	:	"<<num2<<endl; //OK
	}
	static void displayRecord( void )
	{
		//cout<<"Num1	:	"<<num1<<endl;	//Not OK
		Test t;
		cout<<"Num1	:	"<<t.num1<<endl;	//Not OK
		cout<<"Num2	:	"<<num2<<endl;
	}
};
int Test::num2 = 20;
int main( void )
{
	Test t;
	t.showRecord();
	//Test::displayRecord( );
	return 0;
}
