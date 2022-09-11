#include<iostream>
using namespace std;

class Outer	//Top Level class
{
public:
	class Inner	//Nested class
	{
	public:
		Inner( void )
		{
			cout<<"Inner( void )"<<endl;
		}
	};
public:
	Outer( void )
	{
		cout<<"Outer( void )"<<endl;
	}
};
int main( void )
{
	Outer out;

	Outer::Inner in;
	return 0;
}
