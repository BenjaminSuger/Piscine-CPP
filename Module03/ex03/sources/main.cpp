/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsuger <bsuger@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/01 08:26:45 by bsuger            #+#    #+#             */
/*   Updated: 2025/12/04 08:16:21 by bsuger           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int	main(void)
{
	//basic
	DiamondTrap test;
	test.whoAmI();
	test.attack("dragon");
	test.guardGate();
	test.takeDamage(20);
	test.beRepaired(10);


	//illustration of the copy constructor and copy assignement operator
	DiamondTrap test2(test);
	DiamondTrap test3("benjamin");
	test3.takeDamage(150);
	DiamondTrap test4;
	test4 = test3;
	test4.whoAmI();
	
	FragTrap *ptr = new DiamondTrap;
	ptr -> attack("dragon");
	delete ptr;

	ScavTrap *ptr2 = new DiamondTrap;
	ptr2 -> attack("dragon");
	delete ptr2;

}
