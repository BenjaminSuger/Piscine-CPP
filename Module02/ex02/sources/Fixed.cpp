/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsuger <bsuger@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/23 16:53:33 by bsuger            #+#    #+#             */
/*   Updated: 2025/11/27 12:59:47 by bsuger           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

/*CANONICAL FORM; default constructor, destructor, copy constructor and copy assignement*/

Fixed::Fixed() : _Fixed(0)
{
}

Fixed::Fixed(const int value)
{
	_Fixed = value << _Fractional;
}

Fixed::Fixed(const float value)
{
	_Fixed = roundf(value * 256);
}

Fixed::~Fixed()
{
}

Fixed::Fixed(const Fixed& copy) 
{
	*this = copy;
}

Fixed &Fixed::operator=(const Fixed& old)
{
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

//other overload
bool	Fixed::operator==(const Fixed&  right)
{
	return (this -> getRawBits() == right.getRawBits());
}

bool	Fixed::operator!=(const Fixed&  right)
{
	return (this -> getRawBits() != right.getRawBits());
}

bool	Fixed::operator<=(const Fixed&  right)
{
	return (this -> getRawBits() <= right.getRawBits());
}

bool	Fixed::operator>=(const Fixed&  right)
{
	return (this -> getRawBits() >= right.getRawBits());
}

bool	Fixed::operator>(const Fixed&  right)
{
	return (this -> getRawBits() > right.getRawBits());
}

bool	Fixed::operator<(const Fixed&  right)
{
	return (this -> getRawBits() < right.getRawBits());
}

Fixed	Fixed::operator+(const Fixed& right)
{
	Fixed tmp;
	tmp.setRawBits(this -> getRawBits() + right.getRawBits());
	return (tmp);
}

Fixed	Fixed::operator-(const Fixed& right)
{
	Fixed tmp;
	tmp.setRawBits(this -> getRawBits() - right.getRawBits());
	return (tmp);
}

Fixed Fixed::operator*(const Fixed &right)
{
    Fixed	result;
    long	tmp;
    
    tmp = (long) this -> getRawBits() * (long) right.getRawBits();
    result.setRawBits(tmp >> _Fractional);
    return (result);
}

Fixed	Fixed::operator/(const Fixed& right)
{
	if (right.getRawBits() == 0)
		return (0);
	else
	{
		Fixed	result;
		long	tmp;

		tmp = ((long) this -> getRawBits() << _Fractional) /  (long) right.getRawBits();
		result.setRawBits(tmp);
		return (result);
	}
}
//pre increment
Fixed&	Fixed::operator++()
{
	this -> setRawBits(this -> getRawBits() + 1);
	return *this;
}


Fixed&	Fixed::operator--()
{
	this -> setRawBits(this -> getRawBits() - 1);
	return *this;
}

//post increment

Fixed	Fixed::operator++(int)
{
	Fixed temp = *this;
	this -> setRawBits(this -> getRawBits() + 1);
	return (temp);
}

Fixed	Fixed::operator--(int)
{
	Fixed temp = *this;
	this -> setRawBits(this -> getRawBits() - 1);
	return (temp);
}

Fixed&	Fixed::max(Fixed& left, Fixed& right)
{
	if (left.getRawBits() > right.getRawBits())
		return (left);
	return (right);
}

Fixed&	Fixed::min(Fixed& left, Fixed& right)
{
	if (left.getRawBits() > right.getRawBits())
		return (right);
	return (left);
}

const Fixed&	Fixed::min(const Fixed& left, const Fixed& right)
{
	if (left.getRawBits() > right.getRawBits())
		return (right);
	return (left);
}

const Fixed&	Fixed::max(const Fixed& left, const Fixed& right)
{
	if (left.getRawBits() > right.getRawBits())
		return (left);
	return (right);
}
