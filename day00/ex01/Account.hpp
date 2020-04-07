/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ablanar <ablanar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/12 09:56:50 by ablanar           #+#    #+#             */
/*   Updated: 2020/03/12 12:33:01 by ablanar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ACCOUNT_HPP
#define ACCOUNT_HPP
# include "phone.h"

class Account
{
	public:
	int id;
	std::string firstname;
	std::string lastname;
	std::string nickname;
	std::string login;
	std::string postal_address;
	std::string email;
	std::string phone;
	std::string birthday;
	std::string favorite_meal;
	std::string underwear;
	std::string secret;
	void CreateContact(int number);
	void print_out_new(std::string name);
	void show_contacts(void);
	void one_contact(void);
};

#endif
