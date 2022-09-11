#include<iostream>
using namespace std;
class Math
{
public:
	static double pow( double base, int index )
	{
		double result = 1;
		for( int count = 1; count <= index; ++ count )
			result = result * base;
		return result;
	}
};
int main( void )
{
	double result =  Math::pow( 5.0, 2 );
	cout<<"Result	:	"<<result<<endl;
	return 0;
}
