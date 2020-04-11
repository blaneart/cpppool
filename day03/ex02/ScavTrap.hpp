#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP
# include <iostream>
# include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
	private:
		static int const s_max_hp = 100;
		static int const s_max_ep = 50;
		static int const lvl = 1;
		std::string name;
		static int const s_m_attack = 20;
		static int const s_r_attack = 15;
		static int const s_armor = 3;
	public:
		ScavTrap(std::string);
		~ScavTrap();
		ScavTrap(const ScavTrap&);
		ScavTrap& operator=(const ScavTrap&);
		void challengeNewcomer( void );
};
#endif
