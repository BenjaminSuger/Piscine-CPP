/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsuger <bsuger@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/08 21:15:10 by bsuger            #+#    #+#             */
/*   Updated: 2025/12/10 09:30:02 by bsuger           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include "ICharacter.hpp"
# include "AMateria.hpp"

class	Character : public ICharacter
{
	private:
		std::string _name;
		AMateria* _powers[4];
		int _floor_index;
		int _floor_capacity;
		AMateria** _floor;
		void	_resizeFloor();
		int	alreadyIn(AMateria* m);
	public:
		Character();
		Character(const std::string& name);
		~Character();
		Character(const Character& copy);
		Character& operator=(const Character& old);
		std::string	const& getName() const;
		void		equip(AMateria* m);
		void	unequip(int idx);
		void	use(int idx, ICharacter& target);
};

#endif
