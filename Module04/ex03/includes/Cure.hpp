/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsuger <bsuger@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/08 21:15:14 by bsuger            #+#    #+#             */
/*   Updated: 2025/12/08 21:15:15 by bsuger           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
# define CURE_HPP

# include "AMateria.hpp"

class Cure: public AMateria
{
	public:
		Cure();//constructor
		~Cure();//destructor
		Cure(const Cure& copy);//copy constructor
		Cure& operator=(const Cure& old);//copy assignment operator
		AMateria* clone() const;
		void use(ICharacter& target);
};

#endif
