/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsuger <bsuger@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/04 08:58:44 by bsuger            #+#    #+#             */
/*   Updated: 2025/12/04 10:28:38 by bsuger           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal()
{
	std::cout << "Animal constructor\n";
}

Animal::Animal(const std::string type) : _type(type)
{
	std::cout << "Animal constructor\n";
}

Animal::~Animal()
{
	std::cout << "Animal destructor\n";
}

Animal::Animal(const Animal& copy) : _type(copy._type)
{
	std::cout << "Animal copy constructor\n";
}

Animal& Animal::operator=(const Animal& old)
{
	if (this != &old)
	{
		std::cout << "Animal Copy Assignment operator\n";
		this->_type = old._type;
	}
	return (*this);
}

void	Animal::makeSound(void) const
{

}

std::string	Animal::getType(void) const
{
	return(_type);
}
