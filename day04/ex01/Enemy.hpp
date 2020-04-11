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
		void setType(std::string const&);
		void setHP(int);
		virtual void takeDamage(int);
};

#endif
