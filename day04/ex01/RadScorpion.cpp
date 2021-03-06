/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RadScorpion.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ablanar <ablanar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/14 18:55:11 by ablanar           #+#    #+#             */
/*   Updated: 2020/10/14 18:55:11 by ablanar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RadScorpion.hpp"

RadScorpion::RadScorpion() :
	Enemy(80, "RadScorpion")
{
	std::cout << "* click click click *" << std::endl;
}

RadScorpion::RadScorpion(const RadScorpion& other) :
	Enemy(other)
{
}

RadScorpion& RadScorpion::operator=(const RadScorpion & other)
{
	Enemy::operator=(other);
	return *this;
}
RadScorpion::~RadScorpion()
{
	std::cout << "* SPROTCH *" << std::endl;
}
