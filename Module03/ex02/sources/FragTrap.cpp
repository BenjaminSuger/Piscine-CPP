/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsuger <bsuger@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/02 08:29:53 by bsuger            #+#    #+#             */
/*   Updated: 2025/12/03 16:25:45 by bsuger           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap()
{
	this->_hitPoint = 100;
	this->_energyPoint = 100;
	this->_attackDamage = 30;
	std::cout << "FragTrap Constructor\n";
}

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
	this->_hitPoint = 100;
	this->_energyPoint = 100;
	this->_attackDamage = 30;
	std::cout << "FragTrap Constructor\n";
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap Destructor\n";
}

FragTrap::FragTrap(const FragTrap& copy) : ClapTrap(copy)
{
	std::cout << "Copy constructor called\n";
}

FragTrap& FragTrap::operator=(const FragTrap& old)
{
	std::cout << "FragTrap Copy assignment operator\n";
	if (this != &old)
		ClapTrap::operator=(old);
	return (*this);
}

void	FragTrap::highFivesGuys(void)
{
	if (this->_hitPoint > 0 && this->_energyPoint > 0)
	{
		std::cout << this->_name << "; High Fives Guys is here\n";
		this->_energyPoint--;
	}
	else
		std::cout << this->_name << " cannot high five\n";
}

