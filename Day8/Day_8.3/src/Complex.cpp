#include"../include/Complex.h"
using namespace kdac;
void Complex::initComplex( int real, int imag )
{
	this->real = real;
	this->imag = imag;
}

int Complex::getReal( void )
{
	return this->real;
}

void Complex::setReal( int real )
{
	this->real = real;
}

int Complex::getImag( void )
{
	return this->imag;
}

void Complex::setImag( int imag )
{
	this->imag = imag;
}
