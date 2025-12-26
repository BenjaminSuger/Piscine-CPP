/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsuger <bsuger@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/22 15:17:52 by bsuger            #+#    #+#             */
/*   Updated: 2025/12/22 15:17:58 by bsuger           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
#define WHATEVER_HPP

template <typename T> void swap(T &a, T &b) {
  T temp = a;
  a = b;
  b = temp;
}

template <typename T> const T &max(const T &a, const T &b) {
  return (a > b ? a : b);
}

template <typename T> const T &min(const T &a, const T &b) {
  return (a < b ? a : b);
}

#endif
