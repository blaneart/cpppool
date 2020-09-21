/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ablanar <ablanar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/21 16:48:57 by ablanar           #+#    #+#             */
/*   Updated: 2020/09/21 16:48:58 by ablanar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Brain.hpp"

Brain::Brain(void)
{
	srand (time(NULL));
	volume = rand() % 3000;
}

Brain::~Brain(void)
{
}

std::string Brain::identify(void) const
{
	std::stringstream buffer;
	buffer << this;
	return (buffer.str());
}
