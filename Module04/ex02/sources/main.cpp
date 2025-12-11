/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsuger <bsuger@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/04 09:26:05 by bsuger            #+#    #+#             */
/*   Updated: 2025/12/10 11:21:40 by bsuger           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"

int	main(void)
{
	//Animal animal; //not possible as an abstract class
	Animal *test = new Cat();
	test -> makeSound();

	Cat	gato;
	gato.makeSound();
	for (int i = 0; i < 100; i++)
		gato.setIdeas(i, "eat tuna");
	for (int i = 0; i < 100; i++)
		std::cout << gato.getIdeas(i) << "\n";
	//show deep copy
	Cat	garfield;
	garfield = gato;
	for (int i = 0; i < 100; i++)
		std::cout << garfield.getIdeas(i) << "\n";
	//other demonstration
	Cat	larry(gato);
	for (int i = 0; i < 100; i++)
		std::cout << larry.getIdeas(i) << "\n";
	delete test;
}
