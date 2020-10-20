/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Enemy.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ablanar <ablanar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/14 18:54:53 by ablanar           #+#    #+#             */
/*   Updated: 2020/10/14 18:54:54 by ablanar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ENEMY_HPP
#define ENEMY_HPP
#include <iostream>

class Enemy
{
	private:
		Enemy();
		int hp;
		std::string type;
	public:
		Enemy(int hp, std::string const & type);
		Enemy(const Enemy&);
		Enemy& operator=(const Enemy&);
		virtual ~Enemy();
		std::string const getType() const;
		int getHP() const;
		virtual void takeDamage(int);
};

#endif
