/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsuger <bsuger@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/29 16:14:03 by bsuger            #+#    #+#             */
/*   Updated: 2025/12/29 16:15:58 by bsuger           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

# include <stack>
# include <deque>

template <typename T>
class MutantStack : public std::stack<T> {
	private:


	public:
		MutantStack() { };
		~MutantStack() { };
		MutantStack(const MutantStack& copy) : std::stack<T>(copy) {}
		MutantStack& operator=(const MutantStack& old) {
			std::stack<T>::operator=(old);
			return *this;
		}
		typedef typename std::stack<T>::container_type::iterator iterator;
		iterator begin() {
			return this -> c.begin();
		}
		iterator end() {
			return this -> c.end();
		}


};


#endif
