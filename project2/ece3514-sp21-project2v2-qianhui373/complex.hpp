#ifndef COMPLEX_HPP
#define COMPLEX_HPP
#include <cstddef>
#include <complex>
////
// TODO
class Complex {
public:
	//default construct
	Complex();

	//construct imaginary
	Complex(double re, double im);
	

	double real() const;

	double imag() const;

	

private:
	int r;
	int i;
	
};

Complex mul(Complex z1, Complex z2);

Complex add(Complex z1, Complex z2);

Complex sub(Complex z1, Complex z2);

Complex neg(Complex z);

#endif
