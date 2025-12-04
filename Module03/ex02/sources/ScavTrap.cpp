/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsuger <bsuger@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/02 08:29:53 by bsuger            #+#    #+#             */
/*   Updated: 2025/12/04 07:55:32 by bsuger           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
{
	this->_hitPoint = 100;
	this->_energyPoint = 50;
	this->_attackDamage = 20;
	std::cout << "ScavTrap Constructor\n";
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	this->_hitPoint = 100;
	this->_energyPoint = 50;
	this->_attackDamage = 20;
	std::cout << "ScavTrap Constructor\n";
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap Destructor\n";
}

ScavTrap::ScavTrap(const ScavTrap& copy) : ClapTrap(copy)
{
	std::cout << "Copy constructor called\n";
}

ScavTrap& ScavTrap::operator=(const ScavTrap& old)
{
	if (this != &old)
		ClapTrap::operator=(old);
	return *this;
}

void	ScavTrap::attack(const std::string& target)
{
	if (this->_hitPoint > 0 && this->_energyPoint > 0)
	{
		std::cout << "ScavTrap " << this->_name << " attacks " << target << " causing " << this->_attackDamage <<" points of damage!\n";
		this->_energyPoint--;
	}
	else
		std::cout << "ScavTrap " << this->_name << " cannot attack\n";
}

void	ScavTrap::guardGate()
{
	if (this->_hitPoint > 0 && this->_energyPoint > 0)
	{
		std::cout << "ScavTrap " << this->_name << " is now in Gate keeper mode\n";
		this->_energyPoint--;
	}
	else
		std::cout << this->_name << " cannot guard\n";
}
