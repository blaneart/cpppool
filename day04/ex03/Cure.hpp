/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ablanar <ablanar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/16 15:52:52 by ablanar           #+#    #+#             */
/*   Updated: 2020/10/16 15:52:53 by ablanar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
#define CURE_HPP
#include <iostream>
#include "AMateria.hpp"
class Cure : public AMateria
{
	public:
		Cure();
		Cure(const Cure&);
		Cure& operator=(const Cure&);
		virtual ~Cure();
		AMateria* clone() const;
		void use(ICharacter &target);
};
#endif
