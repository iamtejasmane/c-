#include<iostream>
#include<iomanip>
using namespace std;
int main( void )
{
	float number;
	cout<<"Number	:	";
	cin>>number;
	cout<<"Number	:	"<<fixed<<setprecision(2)<<number<<endl;
	return 0;
}
