/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bde-luce <bde-luce@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/31 10:35:30 by bde-luce          #+#    #+#             */
/*   Updated: 2025/10/31 11:20:12 by bde-luce         ###   ########.fr       */
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

	void	harlSwitch(std :: string level);
};

#endif