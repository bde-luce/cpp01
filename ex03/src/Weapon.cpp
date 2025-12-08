/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bde-luce <bde-luce@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/29 18:19:35 by bde-luce          #+#    #+#             */
/*   Updated: 2025/12/08 15:04:34 by bde-luce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Weapon.hpp"
#include <string>

Weapon :: Weapon()
{
}

Weapon :: Weapon(std :: string type)
		: m_type (type)
{
}

Weapon :: ~Weapon()
{
}

const std :: string&	Weapon :: getType() const
{
	return (m_type);
}

void	Weapon :: setType(const std :: string& type)
{
	m_type = type;
}