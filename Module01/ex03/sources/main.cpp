/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsuger <bsuger@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/13 13:14:56 by bsuger            #+#    #+#             */
/*   Updated: 2025/11/19 09:05:14 by bsuger           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include "HumanB.hpp"
#include "Weapon.hpp"

int	main()
{
	{
		Weapon	club = Weapon(" crude spiked club");

		HumanA	bob("Bob", club);
		bob.attack();
		club.setType(" some other type of club");
		bob.attack();
	}
	{
		Weapon	club = Weapon(" crude spiked club");

		HumanB	jim("Jim");
		jim.setWeapon(club);
		jim.attack();
		club.setType(" some other type of club");
		jim.attack();
	}
	return 0;
}
