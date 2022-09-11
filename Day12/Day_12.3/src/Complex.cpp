#include"../include/Complex.h"
using namespace kdac;
Complex::Complex( void ) throw( ) : real( 0 ), imag( 0 )
{	}
Complex::Complex( int real, int imag )throw( IllegalArgumentException )
{
	this->setReal(real);
	this->setImag(imag);
}
int Complex::getReal( void )const throw( )
{
	return this->real;
}
void Complex::setReal( const int real )throw( IllegalArgumentException )
{
	if( real < 0 )
		throw IllegalArgumentException("Invalid real number");
	this->real = real;
}
int Complex::getImag( void )const throw( )
{
	return this->imag;
}
void Complex::setImag( const int imag )throw( IllegalArgumentException )
{
	if( imag < 0 )
		throw IllegalArgumentException("Invalid imag number");
	this->imag = imag;
}
