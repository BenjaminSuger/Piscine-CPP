/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsuger <bsuger@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/26 11:52:15 by bsuger            #+#    #+#             */
/*   Updated: 2025/12/26 11:52:42 by bsuger           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
#define ARRAY_HPP

template <typename T> class Array {
private:
  unsigned int _size;
  T *_array;

public:
  Array();
  Array(unsigned int size);
  ~Array();
  Array(const Array &copy);
  Array &operator=(const Array &old);
  unsigned int size();
  T &operator[](unsigned int n);
  const T &operator[](unsigned int n) const;
};

#endif
