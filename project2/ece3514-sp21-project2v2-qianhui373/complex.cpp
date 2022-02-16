#include "complex.hpp"
#include <cassert>
#include <stdexcept>
#include <cstddef>
#include <cmath>
// TODO
////
Complex::Complex() {
	i = 0;
	r = 0;
	
	
}

Complex::Complex(double re, double im) {
	r = re;
	i = im;
	
}



Complex mul(Complex z1, Complex z2) {
	return Complex(z1.real() * z2.real() - z1.imag() * z2.imag(), z1.real() * z2.imag() + z1.imag() * z2.real());
}

Complex add(Complex z1, Complex z2) {
	return Complex(z1.real() + z2.real(), z1.imag() + z2.imag());
}

Complex neg(Complex z) {
	return Complex(z.real() * -1, z.imag() * -1);
}

Complex sub(Complex z1, Complex z2) {
	return Complex(z1.real() - z2.real(), z1.imag() - z2.imag());
}

double Complex::real() const {
	return r;
}

double Complex::imag() const{
	return i;
}