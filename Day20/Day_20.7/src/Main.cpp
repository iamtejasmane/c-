#include<iostream>
#include<string>
using namespace std;

template<class K, class V>
class Entry
{
private:
	K key;
	V value;
public:
	Entry( K key, V value )
	{
		this->key = key;
		this->value = value;
	}
	K getKey( void )
	{
		return this->key;
	}
	V getValue( void )
	{
		return this->value;
	}
};
int main( void )
{
	Entry<int, string> e(1,"KDac");
	int key = e.getKey();
	string value =  e.getValue();
	cout<<key<<"	"<<value<<endl;
	return 0;
}
