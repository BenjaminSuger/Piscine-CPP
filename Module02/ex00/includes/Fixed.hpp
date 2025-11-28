/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsuger <bsuger@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/23 16:53:13 by bsuger            #+#    #+#             */
/*   Updated: 2025/11/27 12:15:54 by bsuger           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>

class Fixed
{
	private:
		int			_Fixed;
		static const int	_Fractional;
	public:
		Fixed();
		~Fixed();
		Fixed (const Fixed& copy);
		Fixed &operator=(const Fixed& old);
		int	getRawBits(void) const;
		void 	setRawBits(int const raw);
};

#endif
