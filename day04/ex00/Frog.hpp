/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Frog.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ablanar <ablanar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/14 17:51:54 by ablanar           #+#    #+#             */
/*   Updated: 2020/10/19 14:39:16 by ablanar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FROG_HPP
#define FROG_HPP
#include <iostream>
#include "Victim.hpp"

class Frog : public Victim
{
	private:
		Frog();
	public:
		Frog(std::string);
		virtual ~Frog();
		Frog(const Frog&);
		Frog& operator=(const Frog&);
		void getPolymorphed( void ) const;
};
#endif
