#ifndef SUPERTRAP_HPP
#define SUPERTRAP_HPP
#include "FragTrap.hpp"
#include "NinjaTrap.hpp"

class SuperTrap: public FragTrap, public NinjaTrap
{
	private:
		int  n_max_hp;
		int  n_max_ep;
		int  lvl;
		std::string name;
		int  n_m_attack;
		int  n_r_attack;
		int  n_armor;
	public:
		SuperTrap(std::string);
		~SuperTrap();
		SuperTrap(const SuperTrap&);
		SuperTrap& operator=(const SuperTrap&);
};
#endif
