/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ablanar <ablanar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/21 16:48:33 by ablanar           #+#    #+#             */
/*   Updated: 2020/09/21 16:48:34 by ablanar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

# include <string>
# include <iostream>

class Zombie
{
	public:
		Zombie(std::string = "", std::string = "");
		~Zombie( void );
		void setName(std::string);
		void setType(std::string);
		void announce( void );
	private:
		std::string name;
		std::string type;
};
#endif
