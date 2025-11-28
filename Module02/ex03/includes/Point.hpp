/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsuger <bsuger@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/27 13:25:44 by bsuger            #+#    #+#             */
/*   Updated: 2025/11/27 13:26:11 by bsuger           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
# define POINT_HPP

# include "Fixed.hpp"

class Point
{
	private:
		const Fixed _x;
		const Fixed _y;
	public:
		Point();
		Point(const float x, const float y);
		~Point();
		Point(Point& copy);
		Point& operator=(const Point& old);
		//getters
		Fixed	GetX() const;
		Fixed	GetY() const;

};

bool bsp(Point const a, Point const b, Point const c, Point const point);

#endif
