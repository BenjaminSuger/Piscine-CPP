/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsuger <bsuger@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/21 17:50:16 by bsuger            #+#    #+#             */
/*   Updated: 2025/12/21 17:50:18 by bsuger           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BASE_HPP
#define BASE_HPP

#include <cstdlib>
#include <ctime>
#include <exception>
#include <iostream>

class Base {
public:
  virtual ~Base();
};

Base *generate(void);
void identify(Base *p);
void identify(Base &p);

#endif
