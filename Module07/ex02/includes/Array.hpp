/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsuger <bsuger@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/26 15:09:32 by bsuger            #+#    #+#             */
/*   Updated: 2025/12/26 15:09:47 by bsuger           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.tpp"

template <typename T> Array<T>::Array() : _size(0), _array(0) {}

template <typename T> Array<T>::Array(unsigned int size) : _size(size) {
  _array = new T[size]();
}

template <typename T> Array<T>::~Array() { delete[] _array; }

template <typename T> Array<T>::Array(const Array &copy) : _size(0), _array(0) {
  *this = copy;
}

template <typename T> Array<T> &Array<T>::operator=(const Array &old) {
  if (this != &old) {
    delete[] _array;
    _size = old._size;
    if (_size == 0)
      _array = 0;
    else {
      _array = new T[_size]();
      for (unsigned int i = 0; i < _size; i++)
        _array[i] = old._array[i];
    }
  }
  return *this;
}

template <typename T> unsigned int Array<T>::size() { return _size; }

template <typename T> T &Array<T>::operator[](unsigned int n) {
  if (n >= _size)
    throw std::out_of_range("Invalid Index");
  return _array[n];
}

template <typename T> const T &Array<T>::operator[](unsigned int n) const {
  if (n >= _size)
    throw std::out_of_range("Invalid Index");
  return _array[n];
}
