
#ifndef ILLEGALARGUMENTEXCEPTION_H_
#define ILLEGALARGUMENTEXCEPTION_H_

#include<string>
using namespace std;

namespace kdac
{
	class IllegalArgumentException
	{
	private:
		string message;
	public:
		IllegalArgumentException( const string message ) throw( );
		string getMessage( void )const throw( );
	};
}

#endif /* ILLEGALARGUMENTEXCEPTION_H_ */
