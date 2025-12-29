/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsuger <bsuger@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/27 09:41:44 by bsuger            #+#    #+#             */
/*   Updated: 2025/12/29 09:04:35 by bsuger           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_H
# define EASYFIND_H

# include <algorithm>
# include <exception>

class ValueNotFound : public std::exception {
	public :
		virtual const char* what() const throw() {
			return "Value not found";
		}
};

template <typename T> typename T::iterator easyfind(T &container, int value) {
  typename T::iterator result =
      std::find(container.begin(), container.end(), value);
  if (result == container.end())
    throw ValueNotFound();
  return result;
}

#endif
