/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PowerFist.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ablanar <ablanar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/14 18:55:08 by ablanar           #+#    #+#             */
/*   Updated: 2020/10/14 18:55:08 by ablanar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POWERFIST_HPP
#define POWERFIST_HPP
#include "AWeapon.hpp"

class PowerFist : public AWeapon
{
	public:
		PowerFist();
		virtual ~PowerFist();
		PowerFist(const PowerFist&);
		PowerFist& operator=(const PowerFist&);
		void attack() const;
};

#endif
