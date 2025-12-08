/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bde-luce <bde-luce@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/29 16:26:04 by bde-luce          #+#    #+#             */
/*   Updated: 2025/10/29 16:55:28 by bde-luce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Zombie.hpp"
#include <iostream>

int	main()
{
	int 	N = 5;
	Zombie* z_horde = zombieHorde(N, "Jane");
	
	for (int i = 0; i < N; i++)
		z_horde[i].announce();

	delete[] z_horde;
}