/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperTrap.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ablanar <ablanar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/13 20:31:18 by ablanar           #+#    #+#             */
/*   Updated: 2020/10/13 20:31:18 by ablanar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SUPERTRAP_HPP
#define SUPERTRAP_HPP
#include "FragTrap.hpp"
#include "NinjaTrap.hpp"
#include "ClapTrap.hpp"
class SuperTrap: public FragTrap, public NinjaTrap
{
	public:
		SuperTrap(std::string);
		~SuperTrap();
		SuperTrap(const SuperTrap&);
		SuperTrap& operator=(const SuperTrap&);
		void	rangedAttack(std::string const &target);
		void	meleeAttack(std::string const &target);
};
#endif
