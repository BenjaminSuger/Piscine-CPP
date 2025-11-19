/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsuger <bsuger@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/12 09:44:45 by bsuger            #+#    #+#             */
/*   Updated: 2025/11/12 12:54:44 by bsuger           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void)
{
	Zombie	zombie1("Benjamin");
	Zombie	*zombie2;

	//randomChump("Eric");//interesting to keep to show the difference
	zombie2 = newZombie("Tom");
	zombie1.announce();
	zombie2 -> announce();
	delete zombie2;
	randomChump("Eric");
}
