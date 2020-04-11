#include "Enemy.hpp"

Enemy::Enemy(int hp, std::string const & type)
{
	this->hp = hp;
	this->type = type;
}

Enemy::Enemy(const Enemy& other)
{
	this->hp = other.getHP();
	this->type = other.getType();
}

Enemy& Enemy::operator=(const Enemy& other)
{
	this->hp = other.getHP();
	this->type = other.getType();
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

void Enemy::setType(std::string const & type)
{
	this->type = type;
}

void Enemy::setHP(int hp)
{
	this->hp = hp;
}

void Enemy::takeDamage(int damage)
{
	if (damage >= 0)
		this->hp = this->hp - damage;
}
