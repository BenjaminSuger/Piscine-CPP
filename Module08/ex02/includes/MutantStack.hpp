/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsuger <bsuger@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/29 16:14:03 by bsuger            #+#    #+#             */
/*   Updated: 2025/12/30 11:06:37 by bsuger           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <deque>
#include <stack>

template <typename T> class MutantStack : public std::stack<T> {
public:
  MutantStack(){};
  ~MutantStack(){};
  MutantStack(const MutantStack &copy) : std::stack<T>(copy) {}
  MutantStack &operator=(const MutantStack &old) {
    std::stack<T>::operator=(old);
    return *this;
  }
  typedef typename std::stack<T>::container_type::iterator iterator;
  iterator begin() { return this->c.begin(); }
  iterator end() { return this->c.end(); }

  typedef typename std::stack<T>::container_type::const_iterator const_iterator;
  const_iterator begin() const { return this->c.begin(); }
  const_iterator end() const { return this->c.end(); }

  typedef
      typename std::stack<T>::container_type::reverse_iterator reverse_iterator;
  reverse_iterator rbegin() { return this->c.rbegin(); }
  reverse_iterator rend() { return this->c.rend(); }

  typedef typename std::stack<T>::container_type::const_reverse_iterator
      const_reverse_iterator;
  const_reverse_iterator rbegin() const { return this->c.rbegin(); }
  const_reverse_iterator rend() const { return this->c.rend(); }
};

#endif
