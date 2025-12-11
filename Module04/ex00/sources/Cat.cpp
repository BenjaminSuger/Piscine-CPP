/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsuger <bsuger@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/04 09:16:02 by bsuger            #+#    #+#             */
/*   Updated: 2025/12/04 10:23:12 by bsuger           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : Animal("Cat")
{
	std::cout << "Cat constructor\n"; 
}

Cat::~Cat()
{
	std::cout << "Cat destructor\n";
}

Cat::Cat(const Cat& copy) : Animal(copy)
{
	std::cout << "Cat copy constructor\n";
}

Cat& Cat::operator=(const Cat& old)
{
	if (this != &old)
	{
		std::cout << "Cat copy assignment operator\n";
		Animal::operator=(old);
	}
	return (*this);
}

void		Cat::makeSound(void) const
{
	std::cout << "miaou miaou\n";
}
