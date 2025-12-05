/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsuger <bsuger@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/01 08:26:45 by bsuger            #+#    #+#             */
/*   Updated: 2025/12/03 12:46:39 by bsuger           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int	main(void)
{
	//illustration of attacks
	ClapTrap ben("benjamin");
	ben.attack("dragons");
	ben.attack("dragons");
	ben.attack("dragons");
	ben.attack("dragons");
	ben.attack("dragons");
	ben.attack("dragons");
	ben.attack("dragons");
	ben.attack("dragons");
	ben.attack("dragons");
	ben.attack("dragons");
	ben.attack("dragons");

	//illustration of repaired + no name
	ClapTrap test;
	test.beRepaired(1);
	test.beRepaired(1);
	test.beRepaired(1);
	test.beRepaired(1);
	test.beRepaired(1);
	test.beRepaired(1);
	test.beRepaired(1);
	test.beRepaired(1);
	test.beRepaired(1);
	test.beRepaired(1);
	test.beRepaired(1);

	//ilustration of copy constructor & copy assignment operator
	ClapTrap second(ben);
	second.beRepaired(1);
	second.attack("les dieux");

	ClapTrap third;
	third.attack("the reality realm");
	third = ben;
	third.attack("the reality realm");

	//illustration of death
	third.takeDamage(10);
	third.takeDamage(50);
}
