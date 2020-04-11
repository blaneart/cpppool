#include "span.hpp"

span::span(unsigned int n)
{
	this->n = n;
	this->length = 0;
}

span::span(const span& other)
{
	this->n = other.n;
	this->length = other.length;
	this->vec = other.vec;
}

span& span::operator=(const span& other)
{
	this->n = other.n;
	this->length = other.length;
	this->vec = other.vec;
	return *this;
}

span::~span()
{}

void span::addNumber(int number)
{
	if (this->length < this->n)
	{
		this->vec.push_back(number);
		this->length++;
	}
	else
		throw TooManyNumbers();
}

void span::addNumber(std::vector<int>::iterator begin, std::vector<int>::iterator end)
{
	std::vector<int>::iterator old = this->vec.end();
	int new_length = this->length +  std::distance(begin, end);
	if (new_length > this->n)
		throw std::exception();
	this->vec.insert(old, begin, end);
	this->length = new_length;
}

int span::shortestSpan(void)
{
	if (this->length == 1 || this->length == 0)
		throw NotEnoughNumbers();
	std::sort(this->vec.begin(), this->vec.end());
	int short_span = INT_MAX;
	for (int i = 0; i < this->length - 1; i++)
	{
		if (vec[i + 1] - vec[i] < short_span)
			short_span = vec[i + 1] - vec[i];

	}
	return (short_span);
}

const char* span::NotEnoughNumbers::what() const throw()
{
	return "Not enough numbers to find span.";
}

const char* span::TooManyNumbers::what() const throw()
{
	return "Impossible to add number.";
}

int span::longestSpan(void)
{
	if (this->length == 1 || this->length == 0)
		throw NotEnoughNumbers();
	int long_span = 0;
	int max_val = vec[0];
	int min_val = vec[0];
	for (int i = 1; i < this->length; i++)
	{
		if (max_val < vec[i])
			max_val = vec[i];
		if (min_val > vec[i])
			min_val = vec[i];
	}
	long_span = max_val - min_val;
	return (long_span);
}
