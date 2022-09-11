#include<iostream>
using namespace std;
class Date
{
private:
	int day;
	int month;
	int year;
public:
	void acceptRecord( void )
	{
		cout<<"Day	:	";
		cin>>day;
		cout<<"Month	:	";
		cin>>month;
		cout<<"Year	:	";
		cin>>year;
	}
	void printRecord( void )
	{
		cout<<day<<" / "<<month<<" / "<<year<<endl;
	}
};
int main( void )
{
	Date dt1,dt2,dt3;

	dt1.printRecord();
	dt2.printRecord();
	dt3.printRecord();
	return 0;
}
