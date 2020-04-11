#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP
# include <iostream>

class ScavTrap
{
	private:
		int hp;
		static int const max_hp = 100;
		int ep;
		static int const max_ep = 50;
		static int const lvl = 1;
		std::string name;
		static int const m_attack = 20;
		static int const r_attack = 15;
		static int const armor = 3;
	public:
		ScavTrap(std::string);
		~ScavTrap();
		ScavTrap(const ScavTrap&);
		ScavTrap& operator=(const ScavTrap&);
		void rangedAttack(std::string const & target);
		void meleeAttack(std::string const & target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
		void challengeNewcomer( void );
};
#endif
