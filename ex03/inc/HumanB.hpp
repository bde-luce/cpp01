/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bde-luce <bde-luce@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/29 18:19:58 by bde-luce          #+#    #+#             */
/*   Updated: 2025/12/08 18:15:13 by bde-luce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
#define HUMANB_HPP

#include "../inc/Weapon.hpp"
#include <iostream>
#include <string>

class HumanB
{
	std :: string	m_name;
	Weapon*			m_weapon;


	public:

	HumanB(std :: string name);
	~HumanB();

	void	attack();
	void	setWeapon(Weapon& weapon);
};

#endif