/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsuger <bsuger@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/23 16:55:15 by bsuger            #+#    #+#             */
/*   Updated: 2025/11/26 14:39:04 by bsuger           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int	main(void)
{
	Fixed	a;
	Fixed const	b(Fixed(5.05f) * Fixed(2));

	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;

	std::cout << b << std::endl;

	std::cout << Fixed::max(a, b) << std::endl;
//Additonal test
/*	
	std::cout << Fixed::min(a, b) << std::endl;
	Fixed c(Fixed(4.2f) + Fixed(5.13f));
	std::cout << c << "\n";

	Fixed d(Fixed(4.2f) * Fixed(5.13f));
	std::cout << d << "\n";

	Fixed e(Fixed(4.2f) - Fixed(5.13f));
	std::cout << e << "\n";

	Fixed f(Fixed(4.2f) / Fixed(5.13f));
	std::cout << f << "\n";

	Fixed g(Fixed(4.2235f) / Fixed(1.23f));
	std::cout << g << "\n";
	
	Fixed h(Fixed(4.2235f) / Fixed(0));
	std::cout << h << "\n";
	
	std::cout << Fixed::min(a, b) << std::endl;
*/
	return (0);
}
