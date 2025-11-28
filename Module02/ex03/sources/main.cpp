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
#include "Point.hpp"

int	main(void)
{
	Point	a(1.0f,1.0f);
	Point	b(2.0f,3.0f);
	Point	c(4.0f,0.0f);

	Point	point(2.0f,1.5f);

	if (bsp(a, b, c, point) == true)
		std::cout << "the point is inside the triangle\n";
	else
		std::cout << "the point is not inside the triangle\n";
	return (0);
}

/* outside the triangle
	Point	a(1.0f,1.0f);
	Point	b(2.0f,3.0f);
	Point	c(4.0f,0.0f);

	Point	point(2.0f,1.5f);
*/

/*special case if everything is equal => not a triangle anyway

	Point	a(0.0f,0.0f);
	Point	b(0.0f,0.0f);
	Point	c(0.0f,0.0f);

	Point	point(0.0f,0.0f);
*/
