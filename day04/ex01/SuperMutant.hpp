/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperMutant.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ablanar <ablanar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/14 18:55:22 by ablanar           #+#    #+#             */
/*   Updated: 2020/10/14 18:55:22 by ablanar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SUPERMUTANT_HPP
#define SUPERMUTANT_HPP
#include "Enemy.hpp"
class SuperMutant : public Enemy
{
	public:
		SuperMutant();
		SuperMutant(const SuperMutant&);
		SuperMutant& operator=(const SuperMutant &);
		virtual ~SuperMutant();
		void takeDamage(int);
};

#endif
