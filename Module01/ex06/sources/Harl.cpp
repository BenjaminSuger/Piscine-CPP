/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsuger <bsuger@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/18 15:47:50 by bsuger            #+#    #+#             */
/*   Updated: 2025/11/19 08:44:39 by bsuger           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

void	Harl::debug(void)
{
	std::cout << "[ DEBUG ]\n";
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do!\n";
}

void	Harl::info(void)
{
	std::cout << "[ INFO ]\n";
	std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!\n";
}

void	Harl::warning(void)
{
	std::cout << "[ WARNING ]\n";
	std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years, whereas you started working here just last month.\n";
}

void	Harl::error(void)
{
	std::cout << "[ ERROR ]\n";
	std::cout << "This is unacceptable! I want to speak to the manager now.\n";
}

void	Harl::other(void)
{
	std::cout << "[ Probably complaining about insignificant problems ]\n";
}

void	Harl::Complain(std::string level)
{
	int	info = 0;
	static std::string array[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	
	for (int i = 0; i < 4; i++)
	{
		if (level == array[i])
		{
			info = i + 1;
			break;
		}
	}
	switch (info)
	{
		case 0:
			(this ->*_functionptr[0])(); 
			break;
		case 1:
			(this ->*_functionptr[1])(); 
		case 2:
			(this ->*_functionptr[2])(); 
		case 3:
			(this ->*_functionptr[3])(); 
		case 4:
			(this ->*_functionptr[4])(); 
	}
}

Harl::Harl()
{
	_functionptr[0] = &Harl::other;
	_functionptr[1] = &Harl::debug;
	_functionptr[2] = &Harl::info;
	_functionptr[3] = &Harl::warning;
	_functionptr[4] = &Harl::error;
}
