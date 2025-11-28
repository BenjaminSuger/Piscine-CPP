/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsuger <bsuger@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/27 13:27:02 by bsuger            #+#    #+#             */
/*   Updated: 2025/11/27 13:27:17 by bsuger           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

///Orthodox Canonical Form

Point::Point() : _x(0), _y(0)
{
}

Point::Point(const float x, const float y) : _x(x), _y(y)
{
}

Point::~Point()
{
}

Point::Point(Point& copy) : _x(copy._x), _y(copy._y) 
{
}

Point& Point::operator=(const Point &old)
{
	(void) old;
	return *this;
}

//getter to do calculations

Fixed	Point::GetX() const
{
	return (this -> _x);
}

Fixed	Point::GetY() const
{
	return (this -> _y);
}
