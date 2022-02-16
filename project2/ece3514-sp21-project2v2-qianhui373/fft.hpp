#ifndef FFT_HPP
#define FFT_HPP
////
// TODO

#include "complex.hpp"
#include "signal.hpp"
#include <cstddef>


template<std::size_t N>
Signal<Complex, N> fft(const Signal<Complex, N>& input);


std::size_t bitreverse(std::size_t x, int log2n);




#include "fft.tpp"
#endif