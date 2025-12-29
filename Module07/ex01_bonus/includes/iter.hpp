/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsuger <bsuger@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/22 19:30:18 by bsuger            #+#    #+#             */
/*   Updated: 2025/12/22 19:30:19 by bsuger           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
#define ITER_HPP

#include <cstddef>

//only a typename J to manage anytype

template <typename T, typename J> void iter(T *ptr, size_t size, void (*f)(J &)) {
  if (ptr == 0 || f == 0)
    return;
  for (size_t i = 0; i < size; i++)
    f(ptr[i]);
}

/*
template <typename T> void iter(T *ptr, size_t size, void (*f)(const T &)) {
  if (ptr == 0 || f == 0)
    return;
  for (size_t i = 0; i < size; i++)
    f(ptr[i]);
}
*/
#endif
