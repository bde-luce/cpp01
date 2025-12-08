/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bde-luce <bde-luce@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/29 18:20:10 by bde-luce          #+#    #+#             */
/*   Updated: 2025/10/30 13:59:18 by bde-luce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/HumanA.hpp"
#include <iostream>

HumanA :: HumanA(std :: string name, Weapon& weapon)
		: m_name (name)
		, m_weapon (weapon)
{
}

HumanA :: ~HumanA()
{
}

void	HumanA :: attack()
{
	std :: cout << m_name << " attacks with their " << m_weapon.getType() << "\n";
}
