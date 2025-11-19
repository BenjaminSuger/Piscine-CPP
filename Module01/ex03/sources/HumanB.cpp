/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsuger <bsuger@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/13 12:57:50 by bsuger            #+#    #+#             */
/*   Updated: 2025/11/19 09:02:06 by bsuger           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name)
{
	_name = name;
	_Weapon = NULL;
}

void	HumanB::setWeapon(Weapon& weapon)
{
	_Weapon = &weapon;
}

void	HumanB::attack()
{
	std::cout << _name << " attacks with their "; 
	if (_Weapon == NULL)
		std::cout << "\n";
	else
		std::cout << this -> _Weapon -> getType() << "\n";
}
