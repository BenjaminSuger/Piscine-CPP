/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsuger <bsuger@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/08 21:15:04 by bsuger            #+#    #+#             */
/*   Updated: 2025/12/09 15:44:51 by bsuger           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
# define AMATERIA_HPP

# include <iostream>
# include <string>
# include "ICharacter.hpp"

class ICharacter;

class	AMateria
{
	protected:
		std::string _type;
	public:
		AMateria(std::string const & type);//constuctor
		virtual ~AMateria();//destructor
		AMateria(const AMateria& copy);//copy constuctor
		AMateria& operator=(const AMateria& old);//copy assignment operator


		std::string const & getType() const;
		virtual AMateria* clone() const = 0;
		virtual void use(ICharacter& target);
};


#endif
