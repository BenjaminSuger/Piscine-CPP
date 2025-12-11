/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsuger <bsuger@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/04 08:55:57 by bsuger            #+#    #+#             */
/*   Updated: 2025/12/04 10:28:30 by bsuger           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>

class	Animal
{
	protected:
		std::string	_type;
	public:
		Animal();
		Animal(const std::string type);
		virtual ~Animal();
		Animal (const Animal& copy);
		Animal& operator=(const Animal& old);
		virtual void	makeSound(void) const;
		std::string	getType() const;
};

#endif
