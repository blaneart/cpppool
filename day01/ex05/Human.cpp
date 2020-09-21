/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ablanar <ablanar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/21 16:49:08 by ablanar           #+#    #+#             */
/*   Updated: 2020/09/21 16:49:10 by ablanar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Human.hpp"

Human::Human()
{
}

Human::~Human()
{
}

std::string Human::identify(void)
{
	return (this->humanbrain.identify());
}

const Brain &Human::getBrain()
{
	return (this->humanbrain);
}
