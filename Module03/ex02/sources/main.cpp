/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsuger <bsuger@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/01 08:26:45 by bsuger            #+#    #+#             */
/*   Updated: 2025/12/04 15:22:13 by bsuger           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int	main(void)
{
	FragTrap test;
	test.highFivesGuys();
	test.attack("dragon");
	test.takeDamage(50);
	test.beRepaired(50);
	test.takeDamage(150);
	
	FragTrap test2("benjamin");
	test2.attack("dragon serpent");
	for (int i = 0; i < 100; i++)
		test2.attack("dragon serpent");

	//illustration of the polymorphism
	ClapTrap *ptr = new FragTrap;
	ptr -> attack("realm");
	delete ptr;

	//illustration of copy assignement and copy constructor 
	FragTrap test3(test2);
	test3.attack("dragon");
	test3 = test2;
	test3.attack("dragon");
}
