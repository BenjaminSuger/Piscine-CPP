/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsuger <bsuger@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/28 11:07:13 by bsuger            #+#    #+#             */
/*   Updated: 2025/12/29 15:54:39 by bsuger           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span(unsigned int capacity) : _capacity(capacity) {}

Span::~Span() {}

Span::Span(const Span &copy) : _capacity(copy._capacity) {
  for (unsigned int i = 0; i < _capacity; i++)
    _vector.push_back(copy._vector[i]);
}

Span &Span::operator=(const Span &old) {
  if (this != &old) {
    _capacity = old._capacity;
    _vector.resize(_capacity);
    for (unsigned int i = 0; i < _capacity; i++)
      _vector.push_back(old._vector[i]);
  }
  return *this;
}

const char *Span::noCapacity::what() const throw() {
  return "Cannot add more element than the capacity";
}

const char *Span::notEnoughValue::what() const throw() {
  return "Need at least 2 values";
}

void Span::addNumber(int num) {
  if (_vector.size() + 1 <= _capacity)
    _vector.push_back(num);
  else
    throw noCapacity();
}

int Span::longestSpan() {
  if (_vector.size() < 2)
    throw notEnoughValue();
  return *max_element(_vector.begin(), _vector.end()) -
         *std::min_element(_vector.begin(), _vector.end());
}

int Span::shortestSpan() {
  if (_vector.size() < 2)
    throw notEnoughValue();
  std::vector<int> tmp(_vector);
  std::sort(tmp.begin(), tmp.end());
  std::vector<int>::iterator it = tmp.begin();
  int min = *(it + 1) - *it;
  for (; it != tmp.end() && (it + 1) != tmp.end(); it++) {
    if (*(it + 1) - *it < min)
      min = *(it + 1) - *it;
  }
  return min;
}

void Span::printContent() {
  std::vector<int>::iterator it = _vector.begin();
  std::cout << "the content of Span : \n";
  for (; it != _vector.end(); it++)
    std::cout << *it << " ";
  std::cout << "\n";
}
