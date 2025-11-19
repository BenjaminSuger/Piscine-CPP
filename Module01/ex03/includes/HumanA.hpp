/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsuger <bsuger@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/13 12:48:02 by bsuger            #+#    #+#             */
/*   Updated: 2025/11/19 08:54:11 by bsuger           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

# include "Weapon.hpp"
# include <iostream>

class	HumanA
{
	private:
		std::string	_name;
		Weapon&		_Weapon;

	public:
		HumanA(std::string name, Weapon& weapon);
		void	attack();
};

#endif
