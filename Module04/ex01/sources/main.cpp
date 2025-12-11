/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsuger <bsuger@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/04 09:26:05 by bsuger            #+#    #+#             */
/*   Updated: 2025/12/10 11:22:05 by bsuger           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"

int	main(void)
{

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

/*
	//main form the subject
	const Animal* j = new Dog();
	const Animal* i = new Cat();

	j->makeSound();
	i->makeSound();

	delete j;
	delete i;
*/

/*
	//main from what is required
	//animal cannot access getIdeas or SetIdeas
	Animal* array[10];
	for (int i = 0; i < 10; i++)
	{
		if (i < 5)
			array[i] = new Cat();
		else
			array[i] = new Dog();
	}
	for (int i = 0; i < 10 ; i++)
		delete array[i];
*/
}
