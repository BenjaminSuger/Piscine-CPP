/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsuger <bsuger@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/04 10:32:24 by bsuger            #+#    #+#             */
/*   Updated: 2025/12/04 11:24:46 by bsuger           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
	std::cout << "WrongAnimal constructor\n";
}

WrongAnimal::WrongAnimal(const std::string type) : _type(type)
{
	std::cout << "WrongAnimal constructor\n";
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "WrongAnimal destructor\n";
}

WrongAnimal::WrongAnimal(const WrongAnimal& copy) : _type(copy._type)
{
	std::cout << "WrongAnimal copy constructor\n";
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal& old)
{
	if (this != &old)
	{
		std::cout << "WrongAnimal Copy Assignment operator\n";
		this->_type = old._type;
	}
	return (*this);
}

void	WrongAnimal::makeSound(void) const
{
	//std::cout << "this is wrong animal\n";
}

std::string	WrongAnimal::getType(void) const
{
	return(_type);
}
