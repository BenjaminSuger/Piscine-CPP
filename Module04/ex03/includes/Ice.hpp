/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsuger <bsuger@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/08 21:15:43 by bsuger            #+#    #+#             */
/*   Updated: 2025/12/09 15:30:49 by bsuger           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
# define ICE_HPP

# include "AMateria.hpp"
# include "ICharacter.hpp"

class Ice: public AMateria
{
	public:
		Ice();//constructor
		~Ice();//destructor
		Ice(const Ice& copy);//copy constructor
		Ice& operator=(const Ice& old);//copy assignment operator
		AMateria* clone() const;
		void use(ICharacter& target);
};

#endif
