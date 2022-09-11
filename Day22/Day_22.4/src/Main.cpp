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
		cout<<"Num1	:	"<<this->num1<<endl;
		//cout<<"Num2	:	"<<this->num2<<endl; //OK : Not recommended
		cout<<"Num2	:	"<<Test::num2<<endl; //OK
	}
	static void displayRecord( void )
	{
		Test t;
		cout<<"Num1	:	"<<t.num1<<endl;
		//cout<<"Num2	:	"<<t.num2<<endl; //OK : Not recommended
		cout<<"Num2	:	"<<Test::num2<<endl; //OK
	}
};
int Test::num2 = 20;
int main( void )
{
	Test t1;
	//t1.showRecord( ); //OK
	t1.displayRecord( ); //OK : Not recommended
	//Test::displayRecord( ); //OK : Recommended
	return 0;
}
