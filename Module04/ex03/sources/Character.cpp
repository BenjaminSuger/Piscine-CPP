/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsuger <bsuger@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/08 21:16:24 by bsuger            #+#    #+#             */
/*   Updated: 2025/12/10 09:29:44 by bsuger           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character() : _name("random"), _floor_index(0), _floor_capacity(100)
{
	for (int i = 0; i < 4; i++)
		_powers[i] = 0;
	_floor = new AMateria*[_floor_capacity];
	for (int i = 0; i < _floor_capacity; i++)
		_floor[i] = 0;
}

Character::Character(const std::string& name) : _name(name), _floor_index(0), _floor_capacity(100)
{
	for (int i = 0; i < 4; i++)
		_powers[i] = 0;
	_floor = new AMateria*[_floor_capacity];
	for (int i = 0; i < _floor_capacity; i++)
		_floor[i] = 0;
}

Character::~Character()
{
	for(int i = 0; i < 4; i++)
	{
		if (_powers[i] != 0)
			delete _powers[i];
		_powers[i] = 0;
	}
	for (int i = 0; i < _floor_capacity; i++)
	{
		if (_floor[i] != 0)
			delete _floor[i];
		_floor[i] = 0;
	}
	delete[] _floor;
}

Character::Character(const Character& copy) : _name(copy._name), _floor_index(copy._floor_index), _floor_capacity(copy._floor_capacity)
{
	for (int i = 0; i < 4; i++)
	{
		if (copy._powers[i] != 0)
			_powers[i] = copy._powers[i] -> clone();
		else
			_powers[i] = 0;
	}
	_floor = new AMateria*[_floor_capacity];
	for (int i = 0; i < _floor_capacity; i++)
	{
		if(copy._floor[i] != 0)
			_floor[i] = copy._floor[i] -> clone();
		else
			_floor[i] = 0;
	}
}

Character& Character::operator=(const Character& old)
{
	if (this != &old)
	{
		//clean
		for(int i = 0; i < 4; i++)
		{
			if (_powers[i] != 0)
				delete _powers[i];
			_powers[i] = 0;
		}
		for (int i = 0; i < _floor_capacity; i++)
		{
			if (_floor[i] != 0)
				delete _floor[i];
			_floor[i] = 0;
		}
		delete[] _floor;
		//new alloc
		_name = old._name;
		_floor_index = old._floor_index;
		_floor_capacity = old._floor_capacity;
		for (int i = 0; i < 4; i++)
		{
			if (old._powers[i] != 0)
				_powers[i] = old._powers[i] -> clone();
			else
				_powers[i] = 0;
		}
		_floor = new AMateria*[_floor_capacity];
		for (int i = 0; i < _floor_capacity; i++)
		{
			if(old._floor[i] != 0)
				_floor[i] = old._floor[i] -> clone();
			else
				_floor[i] = 0;
		}
	}
	return *this;
}

void	Character::_resizeFloor()
{
	int temp_capacity = _floor_capacity + 50;
	AMateria** temp = new AMateria*[temp_capacity];
	for (int i = 0; i < temp_capacity; i++)
		temp[i] = 0;
	for(int i = 0; i < _floor_capacity; i++)
		temp[i] = _floor[i];
	delete[] _floor;
	_floor = temp;
	_floor_capacity = temp_capacity;
}

int	Character::alreadyIn(AMateria* m)
{
	for (int i = 0; i < 4; i++)
	{
		if (_powers[i] == m)
			return (1);
	}
	return (0);
}

void	Character::equip(AMateria* m)
{
	int	i = 0;
	if (!m)
		return ;
	while (i < 4)
	{
		if (_powers[i] == 0)
		{
			if (alreadyIn(m))
				_powers[i] = m -> clone();
			else
				_powers[i] = m;
			return ;
		}
		i++;
	}
	if (_floor_index >= _floor_capacity)
		_resizeFloor();
	_floor[_floor_index] = m;
	_floor_index++;
}

void	Character::unequip(int idx)
{
	if (idx >= 0 && idx < 4 && _powers[idx] != 0)
	{
		if (_floor_index >= _floor_capacity)
			_resizeFloor();
		_floor[_floor_index] = _powers[idx];
		_floor_index++;
		_powers[idx] = 0;
	}
}

void	Character::use(int idx, ICharacter& target)
{
	if (idx >= 0 && idx < 4 && _powers[idx] != 0)
		_powers[idx] -> use(target);
}

std::string const& Character::getName() const
{
	return _name;
}
