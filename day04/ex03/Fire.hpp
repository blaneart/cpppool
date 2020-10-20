/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fire.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ablanar <ablanar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/20 17:35:48 by ablanar           #+#    #+#             */
/*   Updated: 2020/10/20 17:36:07 by ablanar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef FIRE_HPP
#define FIRE_HPP
#include <iostream>
#include "AMateria.hpp"

class Fire : public AMateria
{
	public:
		Fire();
		Fire(const Fire&);
		Fire& operator=(const Fire&);
		virtual ~Fire();
		AMateria* clone() const;
		void use(ICharacter & target);
};
#endif
