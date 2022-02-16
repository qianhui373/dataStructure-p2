#ifndef SIGNAL_HPP
#define SIGNAL_HPP
#include <cstddef>
//
template <typename T, std::size_t N> 
class Signal
{
public:

	//constructor
	Signal(const T& value = T());

	//copy constructor
	Signal(const Signal<T, N>& rhs);

	//assignment operator
	Signal<T, N>& operator=(const Signal<T, N>& rhs);

	//destructor
	

	//size of signal
	std::size_t length() const;

	//get copy at index
	// thows std::invalid_argument if bad index
	T at(std::size_t index) const;

	//get reference to value at index
	// thows std::invalid_argument if bad index
	T & at(std::size_t index);

	//return copy of value index
	T operator[](std::size_t index) const;

	////return reference to value at index
	T& operator[](std::size_t index) ;

private:
	constexpr static std::size_t size = N;
	T data[N];
	//

};

#include "signal.tpp"

#endif