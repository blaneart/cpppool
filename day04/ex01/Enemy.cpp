/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Enemy.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ablanar <ablanar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/14 18:54:50 by ablanar           #+#    #+#             */
/*   Updated: 2020/10/14 19:18:55 by ablanar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Enemy.hpp"

Enemy::Enemy(int hp, std::string const & type) :
	hp(hp), type(type)
{
}

Enemy::Enemy(const Enemy& other) :
	hp(other.hp), type(other.type)
{
}

Enemy& Enemy::operator=(const Enemy& other)
{
	this->hp = other.hp;
	this->type = other.type;
	return *this;
}

Enemy::~Enemy()
{
}

std::string const Enemy::getType() const
{
	return this->type;
}

int Enemy::getHP() const
{
	return this->hp;
}

void Enemy::takeDamage(int damage)
{
	if (damage >= 0)
		this->hp = this->hp - damage;
	if (hp < 0)
		hp = 0;
}
