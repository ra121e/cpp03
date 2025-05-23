/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: athonda <athonda@student.42singapore.sg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/12 08:37:33 by athonda           #+#    #+#             */
/*   Updated: 2025/05/16 08:00:36 by athonda          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap()
{
	std::cout << "DiamondTrap " << _name << " default constructor called" << std::endl;
}

DiamondTrap::DiamondTrap(const std::string &name) :
	ClapTrap(name + "_clap_name"),
	ScavTrap(name),
	FragTrap(name),
	_name(name)
{
	std::cout << "DiamondTrap " << _name << " parameterized constructor called" << std::endl;
	this->_hitPoints = 100;
	this->_energyPoints = 50;
	this->_attackDamage = 30;
}

DiamondTrap::DiamondTrap(const DiamondTrap &other) :
	ClapTrap(other),
	ScavTrap(other),
	FragTrap(other),
	_name(other._name)
{
	std::cout << "DiamondTrap " << _name << " copy constructor called" << std::endl;
}

DiamondTrap &DiamondTrap::operator=(const DiamondTrap &other)
{
	std::cout << "DiamondTrap " << _name << " copy assignment operator called" << std::endl;
	if (this != &other)
	{
		ClapTrap::operator=(other);
		_name = other._name;
	}
	return (*this);
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "DiamondTrap " << _name << " destructor called" << std::endl;
}

void	DiamondTrap::whoAmI()
{
	std::cout << "DiamondTrap " << _name << " has its own name as " << _name << std::endl;
	std::cout << "DiamondTrap " << _name << " has its ClapTrap name as " << ClapTrap::_name << std::endl;
}