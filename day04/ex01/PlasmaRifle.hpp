/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PlasmaRifle.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ablanar <ablanar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/14 18:55:00 by ablanar           #+#    #+#             */
/*   Updated: 2020/10/14 18:55:01 by ablanar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PLASMARIFLE_HPP
#define PLASMARIFLE_HPP
#include "AWeapon.hpp"

class PlasmaRifle : public AWeapon
{
	public:
		PlasmaRifle();
		virtual ~PlasmaRifle();
		PlasmaRifle(const PlasmaRifle &);
		PlasmaRifle& operator=(const PlasmaRifle &);
		void attack() const;
};

#endif
