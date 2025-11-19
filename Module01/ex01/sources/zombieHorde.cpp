/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsuger <bsuger@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/12 13:06:37 by bsuger            #+#    #+#             */
/*   Updated: 2025/11/13 08:59:39 by bsuger           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie	*zombieHorde(int N, std::string name)
{
	Zombie	*ZombieTab;

	ZombieTab = new Zombie[N];
	for (int i = 0; i < N; i++)
		ZombieTab[i].Setup(name);
	for (int i = 0; i < N; i++)
		ZombieTab[i].announce();
	return (ZombieTab);
}
