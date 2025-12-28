/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsuger <bsuger@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/27 09:41:44 by bsuger            #+#    #+#             */
/*   Updated: 2025/12/28 10:04:29 by bsuger           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_H
#define EASYFIND_H

#include <algorithm>
#include <stdexcept>

template <typename T> typename T::iterator easyfind(T &container, int value) {
  typename T::iterator result =
      std::find(container.begin(), container.end(), value);
  if (result == container.end())
    throw std::out_of_range("Value not found");
  return result;
}

#endif
