/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bde-luce <bde-luce@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/29 17:42:42 by bde-luce          #+#    #+#             */
/*   Updated: 2025/10/29 18:04:37 by bde-luce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int	main()
{
	std :: string	string = "HI THIS IS BRAIN";
	std :: string*	stringPTR = &string;
	std :: string&	stringREF = string;

	std :: cout << "The memory address of the string variable is: " << &string << "\n";
	std :: cout << "The memory address held by stringPTR is: " << stringPTR << "\n";
	std :: cout << "The memory address held by stringREF is: " << &stringREF << "\n";

	std :: cout << "The value of the string variable is: " << string << "\n";
	std :: cout << "The value pointed to by stringPTR is: " << *stringPTR << "\n";
	std :: cout << "The value pointed to by stringREF is: " << stringREF << "\n";
}