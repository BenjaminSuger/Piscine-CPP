/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsuger <bsuger@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/13 12:57:38 by bsuger            #+#    #+#             */
/*   Updated: 2025/11/17 13:14:19 by bsuger           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon& weapon) : _Weapon(weapon)
{
	_name = name;
}

void	HumanA::attack()
{
	std::cout << _name << "attacks with their " << _Weapon.getType() << std::endl;
}
