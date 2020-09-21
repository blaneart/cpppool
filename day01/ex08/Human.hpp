/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ablanar <ablanar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/21 17:27:20 by ablanar           #+#    #+#             */
/*   Updated: 2020/09/21 17:27:21 by ablanar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef HUMAN_HPP
#define HUMAN_HPP
#include <string>
#include <iostream>
class Human
{
	private:
		void meleeAttack(std::string const & target);
		void rangedAttack(std::string const & target);
		void intimidatingShout(std::string const & target);
	public:
		void action(std::string const & action_name, std::string const & target);
};

#endif
