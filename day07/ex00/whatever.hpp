/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ablanar <ablanar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/24 14:27:42 by ablanar           #+#    #+#             */
/*   Updated: 2021/02/24 14:45:11 by ablanar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
#define WHATEVER_HPP

#include <iostream>

template <class T>
void swap(T& a, T& b)
{
	T buf;
	buf = a;
	a = b;
	b = buf;
}

template <class T>
T min(T& a, T& b)
{
	return (a < b ? a : b);
}

template <class T>
T max(T& a, T& b)
{
	return (a > b ? a : b);
}

#endif
