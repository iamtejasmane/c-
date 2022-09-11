#include<iostream>
#include<vector>
using namespace std;
int main( void )
{
	vector<int> v;
	v.push_back(10);
	v.push_back(20);
	v.push_back(30);

	for( int element : v ) //range-based for loop is a C++11 feature
		cout<<element<<endl;
	return 0;
}
int main1( void )
{
	vector<int> v;
	v.push_back(10);
	v.push_back(20);
	v.push_back(30);

	vector<int>::iterator itrStart =  v.begin();
	vector<int>::iterator itrEnd = v.end();
	while( itrStart != itrEnd )
	{
		cout<<(*itrStart)<<"	";
		++itrStart;
	}
	cout<<endl;
	return 0;
}
