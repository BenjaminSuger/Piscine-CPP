/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsuger <bsuger@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/01 08:22:12 by bsuger            #+#    #+#             */
/*   Updated: 2025/12/03 08:46:51 by bsuger           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : _name("random"), _hitPoint(10), _energyPoint(10), _attackDamage(0)
{
	std::cout << "ClapTrap constructor\n";
}

ClapTrap::ClapTrap(std::string name) : _name(name), _hitPoint(10), _energyPoint(10), _attackDamage(0)
{
	std::cout << "ClapTrap constructor\n";
}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap destructor\n";
}

ClapTrap::ClapTrap(const ClapTrap& copy) : _name(copy._name), _hitPoint(copy._hitPoint), _energyPoint(copy._energyPoint), _attackDamage(copy._attackDamage)
{
	std::cout << "Copy constructor of ClapTrap\n";
}

ClapTrap& ClapTrap::operator=(const ClapTrap& old)
{
	std::cout << "Copy Assignment operator ClapTrap\n";
	if (this != &old)
	{
		this->_name = old._name;
		this->_hitPoint = old._hitPoint;
		this->_energyPoint = old._energyPoint;
		this->_attackDamage = old._attackDamage;
	}
	return (*this);
}

void	ClapTrap::attack(const std::string& target)
{
	if (this->_hitPoint > 0 && this->_energyPoint > 0)
	{
		std::cout << "ClapTrap " << this->_name << " attacks " << target << " causing " << this->_attackDamage <<" points of damage!\n";
		this->_energyPoint--;
	}
	else
		std::cout << "ClapTrap " << this->_name << " cannot attack\n";
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	if (amount < 0)
	{
		std::cout << "Nothing happen, damages cannot be negative value\n";
		return ;
	}
	if (this->_hitPoint > 0)
	{
		std::cout << this->_name << " takes " << amount << " damages\n";
		this -> _hitPoint -= amount;
		if (this->_hitPoint <= 0)
		{
			std::cout << this->_name << " died\n";
			this->_hitPoint = 0;
		}
	}
	else
		std::cout << this->_name << " is already dead stop shooting him please\n";
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (this->_hitPoint > 0 && this->_energyPoint > 0)
	{
		std::cout << this->_name << " repaired of " << amount << "\n";
		this->_hitPoint += amount;
		this->_energyPoint--;
	}
	else
		std::cout << this->_name << " does not have enough energy to do reparation\n";
}


