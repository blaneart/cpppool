/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Victim.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ablanar <ablanar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/14 17:53:22 by ablanar           #+#    #+#             */
/*   Updated: 2020/10/14 17:53:23 by ablanar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef VICTIM_HPP
#define VICTIM_HPP
#include <iostream>

class Victim
{
	private:
		Victim();
		std::string name;
	public:
		Victim(std::string);
		~Victim();
		Victim(const Victim&);
		Victim& operator=(const Victim&);
		std::string getName( void ) const;
		virtual void getPolymorphed( void ) const;
};

std::ostream& operator<<(std::ostream& os, const Victim& vic);
#endif
