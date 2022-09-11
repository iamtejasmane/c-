#include<iostream>
using namespace std;

int num6 = 60;	//Program Scope
static int num5 = 50;	//File Scope
namespace kdac
{
	int num4 = 40; //Namesapce scope

	class Test	//Namesapce scope
	{
		//Data Member
		int num3;	//Class Scope
	};
}
int main( void )
{
	//Function Declaration/Prototype;
	int sum( int num1 = 50, int num2 = 60 ); //Prototype scope

	//Local Variable
	int num2  = 20;	//Function Scope
	if( true )
	{
		//Local Variable
		int num1 = 10;	//Block Scope
	}
	else
	{	}

	return 0;
}
