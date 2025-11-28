/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsuger <bsuger@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/07 03:35:49 by bsuger            #+#    #+#             */
/*   Updated: 2025/11/07 03:35:54 by bsuger           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cctype>

std::string	Shout(std::string arg)
{
	for (long unsigned int i = 0; i < arg.size(); i++)
		arg[i] = std::toupper(arg[i]);
	return (arg);
}

int	main(int argc, char **argv)
{
	if (argc == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	else
	{
		for (int i = 1; argv[i]; i++)
			std::cout << Shout(argv[i]);
		std::cout << std::endl;
	}
	return (0);
}
