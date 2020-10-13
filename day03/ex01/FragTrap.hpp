/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ablanar <ablanar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/13 20:28:51 by ablanar           #+#    #+#             */
/*   Updated: 2020/10/13 20:28:51 by ablanar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP
# include <iostream>
class FragTrap
{
	private:
		unsigned int hp;
		unsigned int max_hp;
		unsigned int ep;
		unsigned int max_ep;
		unsigned int lvl;
		std::string name;
		unsigned int m_attack;
		unsigned int r_attack;
		unsigned int armor;
	public:
		FragTrap(std::string);
		~FragTrap();
		FragTrap(const FragTrap&);
		FragTrap& operator=(const FragTrap&);
		void rangedAttack(std::string const & target);
		void meleeAttack(std::string const & target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
		void vaulthunter_dot_exe(std::string const & target);
};
#endif
