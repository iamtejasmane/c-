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
	//Point &other = pt3
	//Point *const this = &pt2
	Point operator+=( Point &other )
	{
		this->xPos += other.xPos;
		this->yPos += other.yPos;
		return ( *this );
	}
	void printRecord( void )
	{
		cout<<this->xPos<<"	"<<this->yPos<<endl;
	}
};
int main( void )
{
	Point pt1(10,20);
	Point pt2(30,40);
	Point pt3(50,60);
	//pt1 += pt2;	//pt1.operator+=( pt2 )
	pt1 = pt2 += pt3;	//pt3 = pt2.operator+=( pt3 )
	pt1.printRecord(); //80,100
	pt2.printRecord();	//80,100
	pt3.printRecord();	//50,60
	return 0;
}
