#ifndef COMPLEX_H_
#define COMPLEX_H_

namespace kdac
{
	class Complex
	{
	private:
		int real;
		int imag;
	public:
		//Complex *const this = &c1
		void initComplex( int real, int imag );

		//Complex *const this = &c1
		int getReal( void );

		//Complex *const this = &c1
		void setReal( int real );

		//Complex *const this = &c1
		int getImag( void );

		//Complex *const this = &c1
		void setImag( int imag );
	};
}


#endif /* COMPLEX_H_ */
