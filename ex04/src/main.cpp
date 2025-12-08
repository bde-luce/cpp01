/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bde-luce <bde-luce@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/30 15:30:44 by bde-luce          #+#    #+#             */
/*   Updated: 2025/12/08 16:17:43 by bde-luce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>

bool	check_file(char* argv1, std :: ifstream& in)
{
	in.open(argv1);
	if (!in.is_open())
	{
		std :: cerr << "Error trying to open file " << argv1 << "\n";
		return (false);
	}
	return (true);
}

bool	check_replace_file(char* argv1, std :: ofstream& out)
{
	std :: string replace_file = std :: string (argv1) + ".replace";
	out.open(replace_file.c_str());
	if (!out.is_open())
	{
		std :: cout << "Error trying to create output replace file\n";
		return (false);
	}
	return (true);
}

void	do_replacement(std :: string s1, std :: string s2, std :: ifstream& in, std :: ofstream& out)
{
	std :: string	line;
	std :: size_t	i;
	std :: size_t	p;
	
	while (getline(in, line))
	{
		i = 0;
		p = line.find(s1);
		while (p != std :: string :: npos)
		{
			if (p > i)
				out << line.substr(i, p - i);
			out << s2;
			i = p + s1.size();
			line = line.substr(i, line.size() - i);
			p = line.find(s1);
		}
		out << line << "\n";
	}
	in.close();
	out.close();
}

void	do_copy(std :: ifstream& in, std :: ofstream& out)
{
	std :: string	line;
	
	while (getline(in, line))
		out << line << "\n";
		
	in.close();
	out.close();
}

int	main(int argc, char** argv)
{
	if (argc == 4)
	{
		std :: ifstream in;
		std :: ofstream out;

		std :: string s1 = argv[2];
		std :: string s2 = argv[3];
		
		if (!check_file(argv[1], in) || !check_replace_file(argv[1], out))
			return (1);
		if (s1.empty())
			do_copy(in, out);
		else
			do_replacement(s1, s2, in, out);
		return (0);
	}
	else
	{
		std :: cerr << "Program must have 3 parametes!\nUsage: ./SedIsForLosers <filename> <s1> <s2>\n";
		return (1);
	}
}
