/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsuger <bsuger@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/08 21:16:19 by bsuger            #+#    #+#             */
/*   Updated: 2025/12/10 08:08:26 by bsuger           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"
#include "ICharacter.hpp"

AMateria::AMateria(std::string const & type) : _type(type)
{
}

AMateria::~AMateria()
{
}

AMateria::AMateria(const AMateria& copy): _type(copy._type)
{
}

AMateria& AMateria::operator=(const AMateria& old)
{
	if (this != &old)
		_type = old._type;
	return *this;
}

std::string const & AMateria::getType(void) const
{
	return(_type);
}

void	AMateria::use(ICharacter& target)
{
	(void) target;
}
