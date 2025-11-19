/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsuger <bsuger@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/18 15:47:50 by bsuger            #+#    #+#             */
/*   Updated: 2025/11/18 16:57:38 by bsuger           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

void	Harl::debug(void)
{
	std::cout << " love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do!";
}

void	Harl::info(void)
{
	std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!\n";
}

void	Harl::warning(void)
{
	std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years, whereas you started working here just last month.\n";
}

void	Harl::error(void)
{
	std::cout << "This is unacceptable! I want to speak to the manager now.\n";
}

int	Harl::_CheckOverflow(int num, const char *arr, int len)
{
    char buf[len + 1];

    std::sprintf(buf, "%d", num);
    if(std::strcmp(buf, arr) == 0)
            return (1);
    return (0);
}

void	Harl::Complain(std::string level)
{
	int i = std::atoi(level.c_str());
	if (_CheckOverflow(i, level.c_str(), level.size()) && (i >= 0 && i <= 3))
	{
		(this ->*_functionptr[i])();
	}
}

Harl::Harl()
{
	_functionptr[0] = &Harl::debug;
	_functionptr[1] = &Harl::info;
	_functionptr[2] = &Harl::warning;
	_functionptr[3] = &Harl::error;
}
