/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Peon.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ablanar <ablanar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/14 17:52:59 by ablanar           #+#    #+#             */
/*   Updated: 2020/10/19 14:38:40 by ablanar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PEON_HPP
#define PEON_HPP
#include <iostream>
#include "Victim.hpp"

class Peon : public Victim
{
	private:
		Peon();
	public:
		Peon(std::string);
		virtual ~Peon();
		Peon(const Peon&);
		Peon& operator=(const Peon&);
		void getPolymorphed( void ) const;
};
#endif
