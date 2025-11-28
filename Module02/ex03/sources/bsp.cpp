/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsuger <bsuger@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/27 13:33:55 by bsuger            #+#    #+#             */
/*   Updated: 2025/11/27 13:34:40 by bsuger           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

//(x_2 - x_1)(y_3 - y_1) - (x_3 - x_1)(y_2 - y_1)


bool bsp(Point const a, Point const b, Point const c, Point const point)
{


	Fixed	abc = (b.GetX() - a.GetX()) * (c.GetY() - a.GetY()) - (c.GetX() - a.GetX()) * (b.GetY() - a.GetY());  
	Fixed	pab = (a.GetX() - point.GetX()) * (b.GetY() - point.GetY()) - (b.GetX() - point.GetX()) * (a.GetY() - point.GetY());
	Fixed	pbc = (b.GetX() - point.GetX()) * (c.GetY() - point.GetY()) - (c.GetX() - point.GetX()) * (b.GetY() - point.GetY());
	Fixed	pca = (c.GetX() - point.GetX()) * (a.GetY() - point.GetY()) - (a.GetX() - point.GetX()) * (c.GetY() - point.GetY());

	std::cout << "abc " << abc << "\n";
	std::cout << "pab " << pab << "\n";
	std::cout << "pbc " << pbc << "\n";
	std::cout << "pca " << pca << "\n";

	Fixed temp = Fixed(0);

	if (abc == temp)//not a triangle
		return (false);
	if (pab == temp || pbc == temp || pca == temp)//is on the edge of the big triangle
		return (false);
	if ((abc > temp) && (pab < temp || pbc < temp || pca < temp))//if anti clockwise
		return (false);
	if ((abc < temp) && (pab > temp || pbc > temp || pca > temp))//if clockwise
		return (false);

	if (abc == (pab + pbc + pca))
		return (true);
	return (false);
}
