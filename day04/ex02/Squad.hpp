/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Squad.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ablanar <ablanar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/16 15:35:01 by ablanar           #+#    #+#             */
/*   Updated: 2020/10/16 15:35:02 by ablanar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SQUAD_HPP
#define SQUAD_HPP
#include <iostream>
#include "ISquad.hpp"

class Squad : public ISquad
{
	private:
		int count;
		ISpaceMarine **unit;
	public:
		Squad();
		Squad(const Squad &);
		Squad& operator=(const Squad &);
		~Squad();
		int getCount() const;
		ISpaceMarine* getUnit(int) const;
		int push(ISpaceMarine*);
};

#endif
