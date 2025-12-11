/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsuger <bsuger@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/04 10:32:28 by bsuger            #+#    #+#             */
/*   Updated: 2025/12/04 11:17:54 by bsuger           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal("WrongCat")
{
	std::cout << "WrongCat constructor\n"; 
}

WrongCat::~WrongCat()
{
	std::cout << "WrongCat destructor\n";
}

WrongCat::WrongCat(const WrongCat& copy) : WrongAnimal(copy)
{
	std::cout << "WrongCat copy constructor\n";
}

WrongCat& WrongCat::operator=(const WrongCat& old)
{
	if (this != &old)
	{
		std::cout << "WrongCat copy assignment operator\n";
		WrongAnimal::operator=(old);
	}
	return (*this);
}

void		WrongCat::makeSound(void) const
{
	std::cout << "miaou miaou\n";
}
