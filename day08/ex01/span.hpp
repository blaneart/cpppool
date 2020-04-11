#ifndef SPAN_HPP
#define SPAN_HPP
#include <iostream>
#include <vector>
#include <algorithm>
class span
{
	private:
		unsigned int n;
		std::vector<int> vec;
		int length;
	public:
		span(unsigned int);
		span(const span&);
		span& operator=(const span&);
		~span();
		void addNumber(int number);
		void addNumber(std::vector<int>::iterator begin, std::vector<int>::iterator end);
		int shortestSpan(void);
		int longestSpan(void);
		class NotEnoughNumbers: public std::exception{
			virtual const char * what() const throw();
		};
		class TooManyNumbers: public std::exception{
			virtual const char * what() const throw();
		};
};
#endif
