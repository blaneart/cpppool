#include "Array.hpp"

template<typename T>
Array<T>::Array()
{
	this->array = new T[0];
	this->length = 0;
}
template<typename T>
Array<T>::Array(unsigned int n)
{
	this->array = new T[n];
	this->length = n;
}
template<typename T>
Array<T>::Array(const Array& other)
{
	this->length = other.size();
	this->array = new T[this->length];
	for (int i = 0; i < this->length; i++)
		this->array[i] = other.array[i];
}
template<typename T>
Array<T>& Array<T>::operator=(const Array& other)
{
	this->length = other.size();
	this->array = new T[this->length];
	for (int i = 0; i < this->length; i++)
		this->array[i] = other.array[i];
	return *this;
}

template<typename T>
const char* Array<T>::OutOfLimitsException::what() const throw()
{
	return "ArrayException: index out of limits";
}

template<typename T>
Array<T>::~Array()
{
	if (this->array)
		delete this->array;
}
template<typename T>
T& Array<T>::operator[](unsigned int i)
{
	if (this->length <= i)
		throw Array::OutOfLimitsException();
	return this->array[i];

}
template<typename T>
unsigned int Array<T>::size() const
{
	return this->length;
}
