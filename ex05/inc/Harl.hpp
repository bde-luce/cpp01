/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bde-luce <bde-luce@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/30 20:15:24 by bde-luce          #+#    #+#             */
/*   Updated: 2025/10/30 20:19:10 by bde-luce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
#define HARL_HPP

#include <string>

class Harl
{
	void debug(void);
	void info(void);
	void warning(void);
	void error(void);

	public:

	Harl();
	~Harl();

	void complain(std::string level);
};

#endif