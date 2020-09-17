/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: art <art@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/15 15:22:14 by art               #+#    #+#             */
/*   Updated: 2020/09/14 20:10:28 by ablanar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PONY_HPP
#define PONY_HPP
# include <iostream>

class Pony
{
	private:
		std::string name;
		int age;
	public:
		Pony(std::string myname, int old);
		~Pony( void );
		void BirthDay( void );
		void SayMyName( void );
};
#endif
