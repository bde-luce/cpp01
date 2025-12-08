/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bde-luce <bde-luce@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/31 10:35:49 by bde-luce          #+#    #+#             */
/*   Updated: 2025/10/31 11:22:44 by bde-luce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Harl.hpp"
#include <iostream>

int	main(int argc, char** argv)
{
	if (argc == 2)
	{
		Harl h;
	
		h.harlSwitch(argv[1]);
		return (0);
	}
	else
	{
		std :: cerr << "Program must have 1 parameter\nUsage: ./HarlFilter <complain level>\n";
		return (1);
	}
}