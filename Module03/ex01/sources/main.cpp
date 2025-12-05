/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsuger <bsuger@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/01 08:26:45 by bsuger            #+#    #+#             */
/*   Updated: 2025/12/04 15:21:03 by bsuger           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int	main(void)
{
	ScavTrap test;
	test.guardGate();
	test.attack("dragon");
	test.takeDamage(50);
	test.beRepaired(50);
	test.takeDamage(150);
	
	ScavTrap test2("benjamin");
	test2.attack("dragon serpent");
	for (int i = 0; i < 50; i++)
		test2.attack("dragon serpent");

	//illustration of the polymorphism
	ClapTrap *ptr = new ScavTrap;
	ptr -> attack("realm");
	delete ptr;

	//illustration of copy assignement and constructor
	ScavTrap test3(test2);
	test3.attack("dragon");
	test3 = test;
	test3.attack("dragon");
}
