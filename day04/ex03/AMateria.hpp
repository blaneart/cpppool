/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ablanar <ablanar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/16 15:37:27 by ablanar           #+#    #+#             */
/*   Updated: 2020/10/16 15:51:47 by ablanar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
#define AMATERIA_HPP
class AMateria;
#include "ICharacter.hpp"
#include <iostream>

class AMateria
{
	private:
		std::string type;
		unsigned int _xp;
		AMateria();
	public:
		AMateria(std::string const & type);
		AMateria(const AMateria &);
		AMateria & operator=(const AMateria &);
		virtual ~AMateria();
		std::string const & getType() const;
		unsigned int getXP() const;
		void setXP(unsigned int);
		virtual AMateria* clone() const = 0;
		virtual void use(ICharacter & traget);
};

#endif
