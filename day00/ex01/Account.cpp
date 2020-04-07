/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ablanar <ablanar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/12 10:11:29 by ablanar           #+#    #+#             */
/*   Updated: 2020/03/12 12:36:08 by ablanar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phone.h"

void Account::CreateContact(int number)
{
	id = number;
	std::cin.clear();
	std::cout << "Please, enter first name:" << std::endl;
	while (firstname.length() == 0)
		std::getline(std::cin, firstname);
	std::cout << "Please, enter last name:" << std::endl;
	while (lastname.length() == 0)
		std::getline(std::cin, lastname);
	std::cout << "Please, enter nickname:" << std::endl;
	while (nickname.length() == 0)
		std::getline(std::cin, nickname);
	std::cout << "Please, enter login:" << std::endl;
	while (login.length() == 0)
		std::getline(std::cin, login);
	std::cout << "Please, enter postal address:" << std::endl;
	while (postal_address.length() == 0)
		std::getline(std::cin, postal_address);
	std::cout << "Please, enter email address:" << std::endl;
	while (email.length() == 0)
		std::getline(std::cin, email);
	std::cout << "Please, enter phone number:" << std::endl;
	while (phone.length() == 0)
		std::getline(std::cin, phone);
	std::cout << "Please, enter birthday date:" << std::endl;
	while (birthday.length() == 0)
		std::getline(std::cin, birthday);
	std::cout << "Please, enter favorite meal:" << std::endl;
	while (favorite_meal.length() == 0)
		std::getline(std::cin, favorite_meal);
	std::cout << "Please, enter underwear color:" << std::endl;
	while (underwear.length() == 0)
		std::getline(std::cin, underwear);
	std::cout << "Please, enter darkest secret:" << std::endl;
	while (secret.length() == 0)
		std::getline(std::cin, secret);
	std::cout << "Contact has been added. Thank you!" << std::endl;
}

void Account::print_out_new(std::string name)
{
	char format[11];

	int len;

	len = name.size();
	if (len > 10)
	{
		std:: size_t length = name.copy(format, 9);
		format[length] = '.';
		format[length + 1] = '\0';
	}
	else
	{
		std:: size_t length = name.copy(format, len);
		format[length] = '\0';
	}
	std::cout << std::setw(10) << format;
}

void Account::one_contact()
{
	std::cout << "First name: " << firstname << std::endl;
	std::cout << "Last name: " << lastname << std::endl;
	std::cout << "Nickname: " << nickname << std::endl;
	std::cout << "Login: " << login << std::endl;
	std::cout << "Postal address: " << postal_address << std::endl;
	std::cout << "Email address: " << email << std::endl;
	std::cout << "Phone number: " << phone << std::endl;
	std::cout << "Birthday date: " << birthday << std::endl;
	std::cout << "Favorite meal: " << favorite_meal << std::endl;
	std::cout << "Underwear color: " << underwear << std::endl;
	std::cout << "Darkest secret " << secret << std::endl;
}
void Account::show_contacts()
{
	std::cout << std::setw(10) << id + 1;
	std::cout << "|";
	print_out_new(firstname);
	std::cout << "|";
	print_out_new(lastname);
	std::cout << "|";
	print_out_new(nickname);
}
