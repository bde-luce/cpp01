/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bde-luce <bde-luce@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/29 16:26:45 by bde-luce          #+#    #+#             */
/*   Updated: 2025/10/29 17:37:10 by bde-luce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Zombie.hpp"
#include <string>

Zombie* zombieHorde(int N, std::string name)
{
	Zombie* z_horde = new Zombie[N];
	
	for (int i = 0; i < N; i++)
		z_horde[i].setName(name);

	return (z_horde);
}