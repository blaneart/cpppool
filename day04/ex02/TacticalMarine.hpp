/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   TacticalMarine.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ablanar <ablanar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/16 15:36:26 by ablanar           #+#    #+#             */
/*   Updated: 2020/10/16 15:36:27 by ablanar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TACTICALMARINE_HPP
#define TACTICALMARINE_HPP
#include "ISpaceMarine.hpp"

class TacticalMarine : public ISpaceMarine
{
	private:

	public:
		TacticalMarine();
		TacticalMarine(const TacticalMarine &);
		TacticalMarine& operator=(const TacticalMarine &);
		~TacticalMarine();
		ISpaceMarine *clone() const;
		void battleCry() const;
		void rangedAttack() const;
		void meleeAttack() const;
};

#endif
