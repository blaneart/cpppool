#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP
# include <iostream>
# include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
	private:
		static int const f_max_hp = 100;
		static int const f_max_ep = 100;
		static int const lvl = 1;
		std::string name;
		static int const f_m_attack = 30;
		static int const f_r_attack = 20;
		static int const f_armor = 5;
	public:
		FragTrap(std::string);
		~FragTrap();
		FragTrap(const FragTrap&);
		FragTrap& operator=(const FragTrap&);
		void vaulthunter_dot_exe(std::string const & target);
};
#endif
