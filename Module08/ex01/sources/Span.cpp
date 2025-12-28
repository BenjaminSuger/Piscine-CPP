/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsuger <bsuger@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/28 11:07:13 by bsuger            #+#    #+#             */
/*   Updated: 2025/12/28 17:07:48 by bsuger           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span(unsigned int capacity) : _capacity(capacity) {
}

Span::~Span() {}

Span::Span(const Span& copy) : _capacity(copy._capacity) {
	for (unsigned int i = 0; i < _capacity; i++)
		_vector.push_back(copy._vector[i]);
}

Span& Span::operator=(const Span& old) {
	if (this != &old) {
		_capacity = old._capacity;
		_vector.resize(_capacity);
		for (unsigned int i = 0; i < _capacity; i++)
			_vector.push_back(old._vector[i]);
	}
	return *this;
}
	
void Span::addNumber(int num) {
	if (_vector.size() + 1 <= _capacity)
		_vector.push_back(num);
	else
		throw std::out_of_range("Cannot add more element than the capacity");
}

int Span::longestSpan() {
	return 0;
}

int Span::shortestSpan() {
	return 0;
}

void Span::printContent() {
	std::cout << "the content of Span : \n";
	for (unsigned int i = 0; i < _capacity; i++)
		std::cout << _vector[i] << " ";
	std::cout << "\n";
}
