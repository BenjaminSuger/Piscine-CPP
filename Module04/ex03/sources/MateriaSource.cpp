/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsuger <bsuger@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/08 21:16:47 by bsuger            #+#    #+#             */
/*   Updated: 2025/12/10 11:26:49 by bsuger           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
	for (int i = 0; i < 4; i++)
		_array[i] = 0;
}

MateriaSource::~MateriaSource()
{
	for (int i = 0; i < 4; i++)
		delete _array[i];
}

MateriaSource::MateriaSource(const MateriaSource& copy)
{
	for (int i = 0; i < 4; i++)
	{
		if (copy._array[i] != 0)
			_array[i] = copy._array[i]->clone();
		else
			_array[i] = 0;
	}
}

MateriaSource&	MateriaSource::operator=(const MateriaSource& old)
{
	if (this != &old)
	{
		for (int i = 0; i < 4; i++)
			delete _array[i];
		for (int i = 0; i < 4; i++)
		{
			if (old._array[i] != 0)
				_array[i] = old._array[i]->clone();
			else
				_array[i] = 0;
		}
	}
	return *this;
}

void	MateriaSource::learnMateria(AMateria *ptr)
{
	for (int i = 0; i < 4; i++)
	{
		if (_array[i] == 0)
		{
			_array[i] = ptr;
			return ;
		}
	}
	delete ptr;
}

AMateria* MateriaSource::createMateria(std::string const & type)
{
	for (int i = 0; i < 4; i++)
	{
		if (_array[i] != 0 && _array[i]->getType() == type)
			return (_array[i]->clone());
	}
	return (0);
}
