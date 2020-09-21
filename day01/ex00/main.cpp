/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ablanar <ablanar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/21 16:47:11 by ablanar           #+#    #+#             */
/*   Updated: 2020/09/21 16:47:30 by ablanar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"


void ponyOnTheHeap()
{
	Pony *ptr;

	ptr = new Pony("PonyOnTheHeap", 5);
	ptr->BirthDay();
	delete ptr;
	std::cout << "Now there is no PonyOnTheHeap anymore:("<< std::endl;
}

void ponyOnTheStack()
{
	Pony st("PonyOnTheStack", 2);
	st.SayMyName();

}
int main()
{
	ponyOnTheHeap();
	ponyOnTheStack();
	std::cout << "Now there is no PonyOnTheStack anymore:("<< std::endl;
	return (0);
}
