#include "fft.hpp"
//
// TODO
#include <cstddef>
#include <cmath>
#include "complex.hpp"

#define PI 3.14159265358979323846
	

template<std::size_t N>

Signal<Complex, N> fft(const Signal<Complex, N>& input){
	

	std::size_t n = input.length();
	Signal<Complex, N> output;

	for(std::size_t i = 0; i<=N - 1; ++i){
		
		output[i] = input[bitreverse(i, log2(n))];
	}

	for (std::size_t s = 1; s <= log2(n); ++s){
		
		Complex w(1, 0);

		for (std::size_t j = 0; j <= pow(2.0, (s-1)) - 1; ++j){
			for (std::size_t k = j; k <= n-1; k = k + pow(2.0,s)){
				
				Complex funOut = output.at(k +pow(2.0, s - 1));
				Complex t = mul(w, funOut);
				Complex u = output[k];
				output[k] = add(t, u);
				output[k + pow(2.0, s-1)] = sub(u, t);
			}
			
			
			Complex w1(cos(-2*PI/pow(2.0,s)), sin(-2*PI/pow(2.0,s)));
			w = mul(w, w1);
	    }
     }


	 

return output;


	

}



std::size_t bitreverse(std::size_t x, int log2n){
	
	std::size_t n = 0;
	for(std::size_t i = 0; i < log2n; i++){
		
		n <<= 1;
		n |= (x & 1);
		x >>= 1;
	}
	return n;
}

