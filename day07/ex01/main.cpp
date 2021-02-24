/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ablanar <ablanar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/24 14:35:58 by ablanar           #+#    #+#             */
/*   Updated: 2021/02/24 14:46:03 by ablanar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <iostream>
#include "iter.hpp"


void p_r_i_n_t(std::string &str)
{
	std::cout << str << "_";
}

void mult(double &d)
{
	d = d * 2;
}
int main()
{
	std::string str[] = {"abcdefg", "kek"};
	double d[] = {1, 1.5, 4.2};
	::iter(str, 2, &p_r_i_n_t);
	std::cout << std::endl;
	::iter(d, 3, &mult);
	for (int i = 0; i < 3; i++)
		std::cout << d[i] << std::endl;
}
