/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsuger <bsuger@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/04 09:26:05 by bsuger            #+#    #+#             */
/*   Updated: 2025/12/10 11:14:43 by bsuger           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"

int	main(void)
{
	Animal	animal;
	animal.makeSound();
	std::cout << animal.getType() << "\n";

	Cat cat;
	cat.makeSound();
	std::cout << cat.getType() << "\n";

	Dog dog;
	dog.makeSound();
	std::cout << dog.getType() << "\n";

	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();

	std::cout << j -> getType() << "\n";
	std::cout << i -> getType() << "\n";
	i -> makeSound();//cat sound
	j -> makeSound();
	meta -> makeSound();
	
	delete i;
	delete j;
	delete meta;

	std::cout << "ILLUSTRATION WRONG ANIMAL AND CAT\n";

	WrongAnimal wronganimal;
	wronganimal.makeSound();
	std::cout << wronganimal.getType() << "\n";

	WrongCat wrongcat;
	wrongcat.makeSound();
	std::cout << wrongcat.getType() << "\n";

	WrongAnimal *ptr = new WrongCat();
	std::cout << ptr -> getType() << "\n";
	ptr -> makeSound();
	
	delete ptr;

}
