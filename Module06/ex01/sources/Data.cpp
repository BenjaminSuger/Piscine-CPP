/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsuger <bsuger@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/21 14:21:45 by bsuger            #+#    #+#             */
/*   Updated: 2025/12/27 08:47:53 by bsuger           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Data.hpp"

Data::Data() : _name("random"), _surname("random") {}

Data::Data(std::string name, std::string surname)
    : _name(name), _surname(surname) {}

Data::~Data() {}

Data::Data(const Data &copy) : _name(copy._name), _surname(copy._surname) {}

Data &Data::operator=(const Data &old) {
  if (this != &old) {
    _name = old._name;
    _surname = old._surname;
  }
  return *this;
}

std::string Data::getName() const { return _name; }

std::string Data::getSurname() const { return _surname; }
