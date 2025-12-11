/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsuger <bsuger@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/04 09:08:25 by bsuger            #+#    #+#             */
/*   Updated: 2025/12/04 11:19:55 by bsuger           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

# include <iostream>

class	WrongAnimal
{
	protected:
		std::string	_type;
	public:
		WrongAnimal();
		WrongAnimal(const std::string type);
		virtual ~WrongAnimal();
		WrongAnimal (const WrongAnimal& copy);
		WrongAnimal& operator=(const WrongAnimal& old);
		void	makeSound(void) const;//not virtual here 
		std::string	getType() const;
};


#endif
