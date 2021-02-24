/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ablanar <ablanar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/24 14:54:44 by ablanar           #+#    #+#             */
/*   Updated: 2021/02/24 15:00:10 by ablanar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

int main()
{
	int * a = new int();
	Array<int> intR;
	Array<int> * b = new Array<int>();
	Array<int> intRR(5);
	intR = intRR;
	for (size_t i = 0; i < intR.size(); i++)
	{
		intR[i] = i;
		std::cout << intR[i] << " ";
	}
	std::cout << std::endl;
 	std::cout << a;
 	std::cout << b;
	return (0);
}
