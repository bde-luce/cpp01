/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bde-luce <bde-luce@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/29 16:26:53 by bde-luce          #+#    #+#             */
/*   Updated: 2025/12/08 14:44:21 by bde-luce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <string>

class Zombie
{
	std :: string	m_name;

	public:

	Zombie();
	~Zombie();

	void	announce(void);
	void	setName(std :: string name);
};

Zombie* zombieHorde(int N, std::string name);

#endif