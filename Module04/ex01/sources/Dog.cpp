/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsuger <bsuger@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/04 09:22:30 by bsuger            #+#    #+#             */
/*   Updated: 2025/12/08 08:38:40 by bsuger           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : Animal("Dog")
{
	this->_brain = new Brain();
	std::cout << "Dog constructor\n"; 
}

Dog::~Dog()
{
	delete _brain;
	std::cout << "Dog destructor\n";
}

Dog::Dog(const Dog& copy) : Animal(copy)
{
	this->_brain = new Brain(*copy._brain);
	std::cout << "Dog copy constructor\n";
}

Dog& Dog::operator=(const Dog& old)
{
	if (this != &old)
	{
		std::cout << "Dog copy assignment operator\n";
		Animal::operator=(old);
		delete _brain;
		this->_brain = new Brain(*old._brain);
	}
	return (*this);
}

void		Dog::makeSound(void) const
{
	std::cout << "woof woof\n";
}

void	Dog::setIdeas(int index, std::string text)
{
	_brain -> setIdeas(index, text);
}

std::string	Dog::getIdeas(int index) const
{
	return (_brain -> getIdeas(index));
}
