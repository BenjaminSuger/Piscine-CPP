/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   randomChump.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsuger <bsuger@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/12 09:46:55 by bsuger            #+#    #+#             */
/*   Updated: 2025/11/12 12:59:14 by bsuger           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

void	randomChump(std::string name)
{
	Zombie	dead(name);

	dead.announce();
}
/*
void	randomChump(std::string name)
{
	Zombie *dead;

	dead = newZombie(name);
	dead -> announce();
	delete dead;
}
*/
