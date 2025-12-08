/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bde-luce <bde-luce@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/29 16:26:49 by bde-luce          #+#    #+#             */
/*   Updated: 2025/12/08 14:44:26 by bde-luce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Zombie.hpp"
#include <iostream>

Zombie :: Zombie()
{
}

Zombie :: ~Zombie()
{
	std :: cout << m_name << " is dead\n";
}

void	Zombie :: announce()
{
	std :: cout << m_name <<  ": BraiiiiiiinnnzzzZ...\n";
}

void	Zombie :: setName(std :: string name)
{
	m_name = name;
}