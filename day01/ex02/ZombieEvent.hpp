/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ablanar <ablanar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/21 16:48:16 by ablanar           #+#    #+#             */
/*   Updated: 2020/09/21 16:48:17 by ablanar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIEEVENT_HPP
#define ZOMBIEEVENT_HPP
# include "Zombie.hpp"

class ZombieEvent
{
	public:
		ZombieEvent(std::string = "");
		~ZombieEvent( void );
		void	setZombieType(std::string);
		Zombie*	newZombie(std::string name);
		void	randomChump( void );
	private:
		std::string type;
};
#endif
