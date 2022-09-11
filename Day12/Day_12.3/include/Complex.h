#ifndef COMPLEX_H_
#define COMPLEX_H_

#include"../include/IllegalArgumentException.h"
using namespace kdac;

namespace kdac
{
class Complex
	{
	private:
		int real;
		int imag;
	public:
		Complex( void ) throw( );
		Complex( int real, int imag )throw( IllegalArgumentException );
		int getReal( void )const throw( );
		void setReal( const int real )throw( IllegalArgumentException );
		int getImag( void )const throw( );
		void setImag( const int imag )throw( IllegalArgumentException );
	};
}
#endif /* COMPLEX_H_ */
