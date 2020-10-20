/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ablanar <ablanar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/14 18:54:47 by ablanar           #+#    #+#             */
/*   Updated: 2020/10/14 18:54:47 by ablanar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
#define CHARACTER_HPP
#include "Enemy.hpp"
#include "AWeapon.hpp"
#include <iostream>
class Character
{
	private:
		std::string name;
		int ap;
		AWeapon *wp;
		Character();
	public:
		Character(std::string const & name);
		Character(const Character &);
		Character & operator=(const Character &);
		~Character();
		void recoverAP();
		void equip(AWeapon*);
		void attack(Enemy*);
		std::string const getName() const;
		AWeapon *getWeapon() const;
		int getAP() const;
};
std::ostream& operator<<(std::ostream& os, const Character& vic);
#endif
