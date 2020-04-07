/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex01.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ablanar <ablanar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/12 09:58:15 by ablanar           #+#    #+#             */
/*   Updated: 2020/03/12 11:55:42 by ablanar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phone.h"

int add_contact(Account *obj)
{
	static int i = 0;

	if (i < 8)
	{
		obj[i].CreateContact(i);
		i++;
	}
	else
		std::cout << "Too many contacts" << std::endl;
	return (i);
}

void search(Account *obj, int i)
{
	int j;
	int num;

	j = 0;
	num = 0;

	if (i < 0)
	{
		std::cout << "The phone book is empty." << std::endl;
		return ;
	}
	while (j <= i)
	{
		obj[j].show_contacts();
		std::cout << std::endl;
		j++;
	}
	std::cout << "Please, enter the index of the contact (1-8)" << std::endl;
	std::cin >> num;
	if (num <= i + 1 && num > 0)
		obj[num - 1].one_contact();
	else
		std::cout << "Wrong index." << std::endl;
}

int main()
{
	std::string	command;
	Account		obj[8];
	int			num;

	num = -1;
	while (1)
	{
		std::cin >> command;
		if (!std::cin.eof())
		{
			if (command == "ADD")
				num = add_contact(obj);
			else if (command == "SEARCH")
				search(obj, num - 1);
			else if (command == "EXIT")
				return (0);
			else
			{
				std::cout << "This command is incorrect. The list of commands:" << std::endl;
				std::cout << "'ADD' to add new contact" << std::endl;
				std::cout << "'SEARCH' to show all current contacts" << std::endl;
				std::cout << "'EXIT' to quit the program" << std::endl;
			}
		}
		else
		{
			std::cout << "Reading stream was closed! Exit" << std::endl;
			return (1);
		}
		std::cin.clear();
		std::cin.sync();
	}
	return (0);
}
