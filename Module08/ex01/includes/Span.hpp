/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsuger <bsuger@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/28 10:15:25 by bsuger            #+#    #+#             */
/*   Updated: 2025/12/30 14:42:28 by bsuger           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
#define SPAN_HPP

#include <algorithm>
#include <exception>
#include <iostream>
#include <vector>

class Span {
private:
  unsigned int _capacity;
  std::vector<int> _vector;

public:
  Span(unsigned int capacity);
  ~Span();
  Span(const Span &copy);
  Span &operator=(const Span &old);
  void addNumber(int num);
  template <typename T> void addNumber(T begin, T end) {
    for (T it = begin; it != end; it++)
	    if (_vector.size() + 1 <= _capacity)
		    _vector.push_back(num);
	    else
		    throw noCapacity();
  }
  int longestSpan();
  int shortestSpan();
  void printContent();
  class noCapacity : public std::exception {
  public:
    virtual const char *what() const throw();
  };
  class notEnoughValue : public std::exception {
  public:
    virtual const char *what() const throw();
  };
};

#endif
