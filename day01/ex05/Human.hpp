/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ablanar <ablanar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/21 16:49:13 by ablanar           #+#    #+#             */
/*   Updated: 2020/09/21 16:49:14 by ablanar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef HUMAN_HPP
#define HUMAN_HPP
#include "Brain.hpp"

class Human
{
	public:
		Human( void );
		~Human( void );
		std::string identify();
		const Brain &getBrain();
	private:
		const Brain humanbrain;
};

#endif
