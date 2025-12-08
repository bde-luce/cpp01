/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bde-luce <bde-luce@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/29 18:19:06 by bde-luce          #+#    #+#             */
/*   Updated: 2025/12/08 15:04:25 by bde-luce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <string>

class Weapon
{
	std :: string	m_type;

	public:

	Weapon();
	Weapon(std :: string type);
	~Weapon();

	const std :: string&	getType() const;
	void					setType(const std :: string& type);
};

#endif