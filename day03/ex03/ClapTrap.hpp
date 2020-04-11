#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP
#include <iostream>
class ClapTrap
{
	protected:
		int hp;
		int ep;
		int max_hp;
		int max_ep;
		int lvl;
		int clap_max_hp;
		int clap_max_ep;
		std::string clap_name;
		int m_attack;
		int r_attack;
		int armor;
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
