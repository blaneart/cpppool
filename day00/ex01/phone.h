/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phone.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ablanar <ablanar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/12 09:57:25 by ablanar           #+#    #+#             */
/*   Updated: 2020/03/12 10:13:12 by ablanar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONE_H
#define PHONE_H
# include <iomanip>
# include <iostream>
# include <string>
# include <sstream>
# include "Account.hpp"
void CreateContact(int number);
void print_out_new(std::string name);
void show_contacts();
#endif
