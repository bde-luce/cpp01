/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bde-luce <bde-luce@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/30 20:15:30 by bde-luce          #+#    #+#             */
/*   Updated: 2025/10/30 22:08:04 by bde-luce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Harl.hpp"
#include <iostream>

void Harl :: debug(void)
{
	std :: cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!\n";
}

void Harl :: info(void)
{
	std :: cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!\n";
}

void Harl :: warning(void)
{
	std :: cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years, whereas you started working here just last month.\n";
}

void Harl :: error(void)
{
	std :: cout << "This is unacceptable! I want to speak to the manager now.\n";
}

Harl :: Harl()
{
}

Harl :: ~Harl()
{
}

void Harl :: complain(std::string level)
{
	std :: string levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	void (Harl :: *complaints[4])(void) = {
		&Harl :: debug,
		&Harl :: info,
		&Harl :: warning,
		&Harl :: error
	};
	
	for (int i = 0; i < 4; i++)
	{
		if (levels[i] == level)
		{
			(this->*complaints[i])();
			return ;
		}
	}
	std :: cout << "Nothing to complain for now..\n";
}