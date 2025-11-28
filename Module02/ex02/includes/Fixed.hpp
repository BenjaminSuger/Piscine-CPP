/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsuger <bsuger@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/23 16:53:13 by bsuger            #+#    #+#             */
/*   Updated: 2025/11/27 12:59:41 by bsuger           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <cmath>

class Fixed
{
	private:
		int			_Fixed;
		static const int	_Fractional;
	public:
		Fixed();
		Fixed(const int value);
		Fixed(const float value);
		~Fixed();
		Fixed (const Fixed& copy);
		Fixed &operator=(const Fixed& old);
		int	getRawBits(void) const;
		void 	setRawBits(int const raw);
		float	toFloat(void) const;
		int	toInt(void) const;
		
		bool	operator==(const Fixed&  right);
		bool	operator!=(const Fixed&  right);
		bool	operator<=(const Fixed&  right);
		bool	operator>=(const Fixed&  right);
		bool	operator>(const Fixed&  right);
		bool	operator<(const Fixed&  right);

		Fixed 	operator+(const Fixed& right);
		Fixed	operator-(const Fixed& right);
		Fixed 	operator*(const Fixed& right);
		Fixed	operator/(const Fixed& right);

		Fixed&	operator++();
		Fixed	operator++(int);
		Fixed&	operator--();
		Fixed	operator--(int);

		static Fixed& max(Fixed& left, Fixed& right);
		static Fixed& min(Fixed& left, Fixed& right);
		static const Fixed& min(const Fixed& left, const Fixed& right);
		static const Fixed& max(const Fixed& left, const Fixed& right);
};

std::ostream& operator<<(std::ostream& os, const Fixed& obj);

#endif
