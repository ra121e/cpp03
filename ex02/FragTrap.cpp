/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: athonda <athonda@student.42singapore.sg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/11 19:54:29 by athonda           #+#    #+#             */
/*   Updated: 2025/05/16 07:59:26 by athonda          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap()
{
	std::cout << "FragTrap " << _name << " Default constructor called" << std::endl;
}

FragTrap::FragTrap(const std::string &name) :
	ClapTrap(name)
{
	std::cout << "FragTrap " << _name << " parameterized constructor called" << std::endl;
	this->_hitPoints = 100;
	this->_energyPoints = 100;
	this->_attackDamage = 30;
}

FragTrap::FragTrap(const FragTrap &other) :
	ClapTrap::ClapTrap(other)
{
	std::cout << "FragTrap " << _name << " copy constructor called" << std::endl;
}

FragTrap	&FragTrap::operator=(const FragTrap &other)
{
	std::cout << "FragTrap " << _name << " copy asignment operator called" << std::endl;
	if (this != &other)
	{
		ClapTrap::operator=(other);
	}
	return (*this);
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap " << _name << " destructor called" << std::endl;
}


void	FragTrap::highFivesGuys(void) const
{
	std::cout << "FragTrap " << _name << " highFiveGuys called" << std::endl;
}