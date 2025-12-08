/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bde-luce <bde-luce@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/29 12:09:45 by bde-luce          #+#    #+#             */
/*   Updated: 2025/10/29 16:52:14 by bde-luce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Zombie.hpp"
#include <iostream>

Zombie :: Zombie(const std :: string& name)
		:m_name (name)
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
