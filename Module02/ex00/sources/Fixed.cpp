/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsuger <bsuger@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/23 16:53:33 by bsuger            #+#    #+#             */
/*   Updated: 2025/11/27 12:16:01 by bsuger           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

/*CANONICAL FORM; default constructor, destructor, copy constructor and copy assignement*/

Fixed::Fixed() : _Fixed(0)
{
	std::cout << "Default constructor called\n";
}

Fixed::~Fixed()
{
	std::cout << "Destructor called\n";
}

Fixed::Fixed(const Fixed& copy) 
{
	std::cout << "Copy constructor called\n";
	*this = copy;
}

Fixed &Fixed::operator=(const Fixed& old)
{
	std::cout << "Copy assignment operator called\n";
	if (this != &old)
		this->_Fixed = old.getRawBits();
	return (*this);
}

/*methods*/

const int	Fixed::_Fractional = 8;	

int	Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called\n";
	return (_Fixed);
}

void	Fixed::setRawBits(int const raw)
{
	_Fixed = raw;
}
