#include<iostream>
using namespace std;
class Singleton
{
private:
	int number;
private:
	Singleton( int number )
	{
		this->number = number;
	}
	Singleton( const Singleton &other )
	{
		this->number = other.number;
	}
public:
	int getNumber( void )const
	{
		return this->number;
	}
	void setNumber( int number )
	{
		this->number = number;
	}
	static Singleton& getInstance( int number = 0 ) //Factory method
	{
		static Singleton instance( number );
		return instance;
	}
};
int main( void )
{
	Singleton &s1 = Singleton::getInstance( 10 );
	s1.setNumber(125);
	cout<<"Number	:	"<<s1.getNumber()<<endl;
	return 0;
}
