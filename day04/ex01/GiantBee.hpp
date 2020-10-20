/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   GiantBee.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ablanar <ablanar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/20 17:19:44 by ablanar           #+#    #+#             */
/*   Updated: 2020/10/20 17:20:09 by ablanar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GIANTBEE_HPP
#define GIANTBEE_HPP
#include "Enemy.hpp"
class GiantBee : public Enemy
{
	public:
		GiantBee();
		GiantBee(const GiantBee&);
		GiantBee& operator=(const GiantBee &);
		virtual ~GiantBee();
		void takeDamage(int);
};

#endif
