/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsuger <bsuger@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/02 14:23:55 by bsuger            #+#    #+#             */
/*   Updated: 2025/12/03 16:14:09 by bsuger           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap() : _name("random")
{
	ScavTrap scav;
	FragTrap frag;

	ClapTrap::_name += "_clap_name";
	this->_hitPoint = frag.getHit();
	this->_energyPoint = scav.getEnergy();
	this->_attackDamage = frag.getAttack();
	std::cout << "DiamondTrap constructor\n";
}

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name + "_clap_name"), _name(name)
{
	ScavTrap scav;
	FragTrap frag;

	this->_hitPoint = frag.getHit();
	this->_energyPoint = scav.getEnergy();
	this->_attackDamage = frag.getAttack();
	std::cout << "DiamondTrap constructor\n";
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "DiamondTrap destructor\n";
}

DiamondTrap::DiamondTrap(const DiamondTrap& copy) : ClapTrap(copy), _name(copy._name)
{
	std::cout << "DiamondTrap copy constructor\n";
}

DiamondTrap& DiamondTrap::operator=(const DiamondTrap &old)
{
	std::cout << "DiamondTrap Copy assignment operator\n";
	if (this != &old)
	{
		FragTrap::operator=(old);
		//ScavTrap::operator=(old);//je peux utiliser les 2 ou n'importe lequel
		this->_name = old._name;
	}
	return (*this);
}

void	DiamondTrap::attack(const std::string& name)
{
	ScavTrap::attack(name);
}

void	DiamondTrap::whoAmI(void)
{
	std::cout << "the name of DiamondTrap " << this->_name << "\n";
	std::cout << "the name in ClapTrap " << ClapTrap::getName() << "\n";
}
