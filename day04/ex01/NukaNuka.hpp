/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NukaNuka.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ablanar <ablanar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/20 17:17:02 by ablanar           #+#    #+#             */
/*   Updated: 2020/10/20 17:24:24 by ablanar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef NUKANUKA_HPP
#define NUKANUKA_HPP
#include "AWeapon.hpp"

class NukaNuka : public AWeapon
{
	public:
		NukaNuka();
		virtual ~NukaNuka();
		NukaNuka(const NukaNuka&);
		NukaNuka& operator=(const NukaNuka&);
		void attack() const;
};

#endif
