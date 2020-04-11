#ifndef NINJATRAP_HPP
#define NINJATRAP_HPP
# include <iostream>
# include "ClapTrap.hpp"

class NinjaTrap : public ClapTrap
{
	private:
		static int const n_max_hp = 60;
		static int const n_max_ep = 120;
		static int const lvl = 1;
		std::string name;
		static int const n_m_attack = 60;
		static int const n_r_attack = 5;
		static int const n_armor = 0;
	public:
		NinjaTrap(std::string);
		~NinjaTrap();
		NinjaTrap(const NinjaTrap&);
		NinjaTrap& operator=(const NinjaTrap&);
		void ninjaShoebox( void );
};
#endif
