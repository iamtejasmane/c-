#include<iostream>
using namespace std;

namespace kdac
{
	class Test
	{
	private:
		int num1;
	protected:
		int num2;
	public:
		Test( void )
		{
			this->num1 = 10;
			this->num2 = 20;
		}
		friend void print( void );
	};
}
void kdac::print( void )
{
	Test t;
	cout<<"Num1	:	"<<t.num1<<endl;
	cout<<"Num2	:	"<<t.num2<<endl;
}
int main( void )
{
	kdac::print( );
	return 0;
}
