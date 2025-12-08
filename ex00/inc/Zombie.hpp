/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bde-luce <bde-luce@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/29 12:09:39 by bde-luce          #+#    #+#             */
/*   Updated: 2025/10/29 14:05:30 by bde-luce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <string>

class Zombie
{
	std :: string	m_name;

	public:

	Zombie(const std :: string& name);
	~Zombie();

	void	announce(void);
};

Zombie* newZombie( std::string name);
void randomChump( std::string name);

#endif 