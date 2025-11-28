/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsuger <bsuger@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/07 03:35:49 by bsuger            #+#    #+#             */
/*   Updated: 2025/11/29 00:18:20 by bsuger           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cctype>
#include <algorithm>

//demonstration of std::transform
std::string	Shout(std::string arg)
{
	std::transform(arg.begin(), arg.end(), arg.begin(), ::toupper);
	return (arg);
}

/* demonstration for range loop
std::string	Shout(std::string arg)
{
	for (auto &it : arg)
		it = std::toupper(it);
	return (arg);
}
*/
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
