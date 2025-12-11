/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsuger <bsuger@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/04 09:16:02 by bsuger            #+#    #+#             */
/*   Updated: 2025/12/08 08:38:48 by bsuger           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : Animal("Cat")
{
	this->_brain = new Brain();
	std::cout << "Cat constructor\n"; 
}

Cat::~Cat()
{
	delete _brain;
	std::cout << "Cat destructor\n";
}

Cat::Cat(const Cat& copy) : Animal(copy)
{
	this->_brain = new Brain(*copy._brain);
	std::cout << "Cat copy constructor\n";
}

Cat& Cat::operator=(const Cat& old)
{
	if (this != &old)
	{
		std::cout << "Cat copy assignment operator\n";
		Animal::operator=(old);
		delete _brain;
		this->_brain = new Brain(*old._brain);
	}
	return (*this);
}

void		Cat::makeSound(void) const
{
	std::cout << "miaou miaou\n";
}

void	Cat::setIdeas(int index, std::string text)
{
	_brain -> setIdeas(index, text);
}

std::string	Cat::getIdeas(int index) const
{
	return (_brain -> getIdeas(index));
}
