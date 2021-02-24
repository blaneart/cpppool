/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ablanar <ablanar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/24 14:46:30 by ablanar           #+#    #+#             */
/*   Updated: 2021/02/24 15:00:24 by ablanar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef ARRAY_HPP
#define ARRAY_HPP
#include <iostream>
#include <exception>

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
	for (unsigned int i = 0; i < n; i++)
	{
		// This initializes every cell to type's default value;
		this->array[i] = T();
	}
}

template<typename T>
Array<T>::Array(const Array& other)
{
	this->length = other.size();
	this->array = new T[this->length];
	for (unsigned int i = 0; i < this->length; i++)
		this->array[i] = other.array[i];
}

template<typename T>
Array<T>& Array<T>::operator=(const Array& other)
{
	this->length = other.size();
	this->array = new T[this->length];
	for (unsigned int i = 0; i < this->length; i++)
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
	this->array = NULL;
	this->length = 0;
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

#endif
