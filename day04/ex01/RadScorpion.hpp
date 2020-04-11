#ifndef RADSCORPION_HPP
#define RADSCORPION_HPP

#include "Enemy.hpp"

class RadScorpion : public Enemy
{
	public:
		RadScorpion();
		RadScorpion(const RadScorpion&);
		RadScorpion& operator=(const RadScorpion &);
		virtual ~RadScorpion();
		void takeDamage(int);
};

#endif
