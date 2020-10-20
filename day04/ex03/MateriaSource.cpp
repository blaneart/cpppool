/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ablanar <ablanar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/16 16:07:12 by ablanar           #+#    #+#             */
/*   Updated: 2020/10/20 16:11:21 by ablanar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
	this->count = 0;
	for(int i = 0; i < 4; i++)
		this->m[i] = NULL;
}

MateriaSource::MateriaSource(const MateriaSource& other)
{
	this->count = other.count;
	for (int i = 0; i < this->count; i++)
		this->m[i] = other.m[i]->clone();
}

MateriaSource& MateriaSource::operator=(const MateriaSource& other)
{
	for (int i = 0; i < this->count; i++)
		delete this->m[i];
	this->count = other.count;
	for (int i = 0; i < this->count; i++)
		this->m[i] = other.m[i]->clone();
	return *this;
}

MateriaSource::~MateriaSource()
{
	for (int i = 0; i < this->count; i++)
	{
		delete this->m[i];
		this->m[i] = NULL;
	}
}

void MateriaSource::learnMateria(AMateria* m)
{
	if (m == NULL)
		return ;
	if (this->count < 3)
	{
		this->m[this->count] = m;
		this->count += 1;
	}
}

AMateria* MateriaSource::createMateria(std::string const & type)
{
	for (int i = 0; i < this->count; i++)
		if (type == this->m[i]->getType())
			return this->m[i]->clone();
	return 0;
}
