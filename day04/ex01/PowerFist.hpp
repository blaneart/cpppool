#ifndef POWERFIST_HPP
#define POWERFIST_HPP
#include "AWeapon.hpp"

class PowerFist : public AWeapon
{
	public:
		PowerFist();
		~PowerFist();
		PowerFist(const PowerFist&);
		PowerFist& operator=(const PowerFist&);
		void attack() const;
};

#endif
