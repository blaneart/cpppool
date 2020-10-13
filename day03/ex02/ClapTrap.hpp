/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ablanar <ablanar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/13 20:29:17 by ablanar           #+#    #+#             */
/*   Updated: 2020/10/13 20:29:19 by ablanar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP
#include <iostream>
class ClapTrap
{
	protected:
		unsigned int hp;
		unsigned int ep;
		unsigned int max_hp;
		unsigned int max_ep;
		unsigned int lvl;
		std::string name;
		unsigned int m_attack;
		unsigned int r_attack;
		unsigned int armor;
		std::string type;
	public:
		ClapTrap();
		~ClapTrap();
		ClapTrap(const ClapTrap&);
		ClapTrap& operator=(const ClapTrap&);
		void rangedAttack(std::string const & target);
		void meleeAttack(std::string const & target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
};
#endif
