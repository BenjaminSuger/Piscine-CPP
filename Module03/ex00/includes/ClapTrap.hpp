/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsuger <bsuger@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/26 16:22:36 by bsuger            #+#    #+#             */
/*   Updated: 2025/12/01 09:36:09 by bsuger           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_H
# define CLAPTRAP_H

# include <iostream>

class	ClapTrap
{
	private:
		std::string	_name;
		int		_hitPoint;
		int		_energyPoint;
		int		_attackDamage;
	public:
		ClapTrap();
		ClapTrap(std::string name);
		~ClapTrap();
		ClapTrap(const ClapTrap& copy);
		ClapTrap& operator=(const ClapTrap &old);
		void		attack(const std::string& target);
		void		takeDamage(unsigned int amount);
		void		beRepaired(unsigned int amount);
};

#endif
