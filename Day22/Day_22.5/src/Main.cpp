#include<iostream>
using namespace std;
class Test
{
public:
	int num1;
public:
	Test( void )
	{
		this->num1 = 10;
	}
	void print( void  )
	{
		//cout<<"Num1	:	"<<this->num1<<endl;
		cout<<"Num1	:	"<<num1<<endl;
		//cout<<"Num1	:	"<<this->Test::num1<<endl;
		cout<<"Num1	:	"<<Test::num1<<endl;
	}
};
int main( void )
{
	Test t1;
	t1.print();

	return 0;
}
