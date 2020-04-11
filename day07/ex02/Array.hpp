#ifndef ARRAY_HPP
#define ARRAY_HPP
#include <iostream>

template <typename T>
class Array
{
	private:
		T *array;
		unsigned int length;
	public:
		Array( void );
		Array(unsigned int n);
		Array(const Array<T>&);
		Array& operator=(const Array&);
		T& operator[](unsigned int);
		~Array();
		class OutOfLimitsException: public std::exception {
			virtual const char * what() const throw();
		};
		unsigned int size( void ) const;
};

#endif
