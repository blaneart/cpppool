/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ablanar <ablanar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/24 14:41:29 by ablanar           #+#    #+#             */
/*   Updated: 2021/02/24 14:55:19 by ablanar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
#define ITER_HPP


template <class T>
void iter(T array[], unsigned int length, void (*f)(T &elem))
{
	for (unsigned int i = 0; i < length; i++)
		f(array[i]);
}

#endif
