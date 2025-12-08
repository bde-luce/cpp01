/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bde-luce <bde-luce@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/29 12:08:36 by bde-luce          #+#    #+#             */
/*   Updated: 2025/12/08 14:22:54 by bde-luce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Zombie.hpp"

int	main()
{	
	randomChump("Igor");
	
	Zombie* new_zombie = newZombie("Adrian");
	new_zombie->announce();
	delete new_zombie;
}