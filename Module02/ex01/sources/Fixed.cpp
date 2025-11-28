/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsuger <bsuger@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/23 16:53:33 by bsuger            #+#    #+#             */
/*   Updated: 2025/11/27 13:00:07 by bsuger           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

/*CANONICAL FORM; default constructor, destructor, copy constructor and copy assignement*/

Fixed::Fixed() : _Fixed(0)
{
	std::cout << "Default constructor called\n";
}

Fixed::Fixed(const int value)
{
	std::cout << "Int constructor\n";
	_Fixed = value << _Fractional;
}

Fixed::Fixed(const float value)
{
	std::cout << "Float constructor\n";
	_Fixed = roundf(value * 256);
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
	return (_Fixed);
}

void	Fixed::setRawBits(int const raw)
{
	_Fixed = raw;
}

int	Fixed::toInt(void) const
{
	return (_Fixed >> _Fractional);
}

float	Fixed::toFloat(void) const
{
	return (_Fixed / 256.0f);
}

std::ostream& operator<<(std::ostream& os, const Fixed& obj)
{
	os << obj.toFloat();
	return (os);
}
