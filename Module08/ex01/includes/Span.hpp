/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsuger <bsuger@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/28 10:15:25 by bsuger            #+#    #+#             */
/*   Updated: 2025/12/28 13:23:04 by bsuger           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

# include <iostream>
# include <vector>
# include <algorithm>
# include <stdexcept>

class Span {
	private:
		unsigned int _capacity;
		std::vector<int> _vector;
	public:
		Span(unsigned int capacity);
		~Span();
		Span(const Span& copy);
		Span& operator=(const Span& old);
		void addNumber(int num);
		template <typename T> 
		void addNumber(T begin, T end) {
			for (T it = begin; it != end; it++)
				_vector.push_back(*it);
		}
		int longestSpan();
		int shortestSpan();
		void printContent();
};

#endif
