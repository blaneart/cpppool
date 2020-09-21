/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ablanar <ablanar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/21 16:49:03 by ablanar           #+#    #+#             */
/*   Updated: 2020/09/21 16:49:04 by ablanar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef BRAIN_HPP
#define BRAIN_HPP
#include <string>
#include <sstream>

class Brain
{
	public:
		Brain();
		~Brain();
		std::string identify() const;
	private:
		unsigned int volume;
};
#endif
