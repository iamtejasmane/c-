#include<iostream>
using namespace std;

template<class T>
void swap_object( T &arg1, T &arg2 )
{
	T temp = arg1;
	arg1 = arg2;
	arg2 = temp;
}
int main( void )
{
	int a = 10;
	int b = 20;

	//swap_object<int>(a,b);
	//swap_object(a,b);
	swap_object<int>(a,b);
	cout<<"a	:	"<<a<<endl;
	cout<<"b	:	"<<b<<endl;
	return 0;
}
