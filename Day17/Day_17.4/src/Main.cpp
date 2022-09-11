#include<iostream>
using namespace std;
class Outer	//Top Level class
{
private:
	class Inner	//Nested class
	{

	};
	friend int main( void );
};
int main( void )
{
	Outer out;
	Outer::Inner in;
	return 0;
}
