#include<iostream>
using namespace std;
class Point
{
private:
	int xPos;
	int yPos;
public:
	Point( int xPos = 0, int yPos = 0 )
	{
		this->xPos = xPos;
		this->yPos = yPos;
	}
	Point operator++( void  )	//Pre-Increment
	{
		Point temp;
		temp.xPos = ++ this->xPos;
		temp.yPos = ++ this->yPos;
		return temp;
	}
	Point operator++( int )	//Post-Increment
	{
		Point temp;
		temp.xPos = this->xPos ++;
		temp.yPos = this->yPos ++;
		return temp;
	}
	void printRecord( void )
	{
		cout<<this->xPos<<"	"<<this->yPos<<endl;
	}
};
int main( void )
{
	Point pt1(10,20);
	Point pt2 = pt1 ++;	//pt2 = pt1.operator++( 0 )
	pt1.printRecord();	//11,21
	pt2.printRecord();	//10,20
	return 0;
}
int main1( void )
{
	Point pt1(10,20);
	Point pt2 = ++ pt1; //pt2 = pt1.operator++( )
	pt1.printRecord();
	pt2.printRecord();
	return 0;
}
