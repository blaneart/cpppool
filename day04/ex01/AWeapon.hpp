/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AWeapon.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ablanar <ablanar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/14 17:53:31 by ablanar           #+#    #+#             */
/*   Updated: 2020/10/14 17:53:31 by ablanar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AWEAPON_HPP
#define AWEAPON_HPP
#include <iostream>

class AWeapon
{
	private:
		AWeapon();
		std::string name;
		int apcost;
		int damage;
	public:
		AWeapon(std::string const & name, int apcost, int damage);
		virtual ~AWeapon();
		AWeapon(const AWeapon&);
		AWeapon& operator=(const AWeapon&);
		std::string const getName() const;
		int getAPCost() const;
		int getDamage() const;
		virtual void attack() const = 0;
};
#endif
