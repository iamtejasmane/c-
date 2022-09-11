#include<iostream>
using namespace std;
class Test
{
private:
	 int num1;	//Instance Variable
	 int num2;	//Instance Variable
	static int num3;	//Class Level Variable
public:
	Test( int n1, int n2 )
	{
		this->num1 = n1;
		this->num2 = n2;
	}
	void printRecord( void )
	{
		cout<<"Num1	:	"<<this->num1<<endl;
		cout<<"Num1	:	"<<this->num2<<endl;
		cout<<"Num1	:	"<<Test::num3<<endl;
		cout<<endl;
	}
};
int Test::num3 = 500;	//Global Definition : To get memory for num3
int main( void )
{
	Test t1(10,20);
	Test t2(30,40 );
	Test t3(50,60);

	t1.printRecord();
	t2.printRecord();
	t3.printRecord();
	return 0;
}
