/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bde-luce <bde-luce@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/29 18:19:30 by bde-luce          #+#    #+#             */
/*   Updated: 2025/12/08 15:00:16 by bde-luce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
#define HUMANA_HPP

#include "../inc/Weapon.hpp"
#include <iostream>
#include <string>

class HumanA
{
	std :: string	m_name;
	Weapon&			m_weapon;

	public:

	HumanA(std :: string name, Weapon& weapon);
	~HumanA();

	void	attack();
};

#endif