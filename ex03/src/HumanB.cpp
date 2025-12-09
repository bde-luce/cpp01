/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bde-luce <bde-luce@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/29 18:19:46 by bde-luce          #+#    #+#             */
/*   Updated: 2025/12/08 18:15:29 by bde-luce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/HumanB.hpp"
#include <iostream>

HumanB :: HumanB(std :: string name)
		: m_name (name)
		, m_weapon (NULL)
{
}

HumanB :: ~HumanB()
{
}

void	HumanB :: attack()
{
	if (m_weapon)
		std :: cout << m_name << " attacks with their " << m_weapon->getType() << "\n";
	else
		std :: cout << m_name << " has no weapon to attack\n";
}

void	HumanB :: setWeapon(Weapon& weapon)
{
	m_weapon = &weapon;
}