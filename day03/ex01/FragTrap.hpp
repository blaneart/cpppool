#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP
# include <iostream>
class FragTrap
{
	private:
		int hp;
		static int const max_hp = 100;
		int ep;
		static int const max_ep = 100;
		static int const lvl = 1;
		std::string name;
		static int const m_attack = 30;
		static int const r_attack = 20;
		static int const armor = 5;
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
