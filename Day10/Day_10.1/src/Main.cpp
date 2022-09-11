#include<cstdlib>
#include<iostream>
using namespace std;
class Test
{
private:
	int num1;
	int num2;
	int num3;
public:
	Test( void ) : num2( num1 ), num1( 10 ), num3( num2 ) //Constructor's member initializer list.
	{	}
	void printRecord( void )
	{
		cout<<"Num1	:	"<<this->num1<<endl;
		cout<<"Num2	:	"<<this->num2<<endl;
		cout<<"Num3	:	"<<this->num3<<endl;
	}
};
int main( void )
{
	Test t;
	t.printRecord();
	return 0;
}
