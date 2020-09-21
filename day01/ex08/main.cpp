/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ablanar <ablanar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/21 17:27:25 by ablanar           #+#    #+#             */
/*   Updated: 2020/09/21 17:27:26 by ablanar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Human.hpp"

int main()
{
	Human kek;

	kek.action("meleeAttack", "target");
	kek.action("rangedAttack", "target");
	kek.action("intimidatingShout", "target");
	return (0);
}
