/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ablanar <ablanar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/21 16:47:34 by ablanar           #+#    #+#             */
/*   Updated: 2020/09/21 16:47:36 by ablanar          ###   ########.fr       */
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
