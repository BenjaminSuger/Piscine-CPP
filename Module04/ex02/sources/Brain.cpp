/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsuger <bsuger@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/04 11:32:36 by bsuger            #+#    #+#             */
/*   Updated: 2025/12/08 08:40:06 by bsuger           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
	std::cout << "Brain constructor\n";
}

Brain::~Brain()
{
	std::cout << "Brain destructor\n";
}

Brain::Brain(const Brain& copy)
{
	std::cout << "Brain copy constructor\n";
	for (int i = 0; i < 100 ; i++)
		_ideas[i] = copy._ideas[i];
}

Brain& Brain::operator=(const Brain& old)
{
	if (this != &old)
	{
		std::cout << "Brain copy assignment operator\n";
		for (int i = 0; i < 100; i++)
			_ideas[i] = old._ideas[i];
	}
	return (*this);
}

void	Brain::setIdeas(int index, std::string text)
{
	if (index >= 0 && index < 100)
		_ideas[index] = text;
}

std::string	Brain::getIdeas(int index) const
{
	if (index >= 0 && index < 100)
		return (this->_ideas[index]);
	return ("");
}
