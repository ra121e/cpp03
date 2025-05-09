/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: athonda <athonda@student.42singapore.sg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/08 19:12:51 by athonda           #+#    #+#             */
/*   Updated: 2025/05/09 11:18:34 by athonda          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(const std::string &name) :
	_name(name),
	_hitPoints(10),
	_energyPoints(10),
	_attackDamage(0)
{
	std::cout << "Default constructor called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &a)
{
	std::cout << "copy constructor called" << std::endl;
	*this = a;
}

ClapTrap	&ClapTrap::operator=(const ClapTrap &other)
{
	std::cout << "copy asignment operator called" << std::endl;
	if (this != &other)
	{
		this->_name = other._name;
		this->_hitPoints = 10;
		this->_energyPoints = 10;
		this->_attackDamage = 0;
	}
	return (*this);
}

ClapTrap::~ClapTrap()
{
	std::cout << "destructor called" << std::endl;
}

void	ClapTrap::attack(const std::string &target)
{
	if (this->_hitPoints <= 0)
	{
		std::cout << "Clap Trap " << this->_name << " has no enough Hit pointhas no enough Hit point." << std::endl;
		return ;
	}
	if (this->_energyPoints <= 0)
	{
		std::cout << "Clap Trap " << this->_name << " has no enough Energy pointhas no enough Hit point." << std::endl;
		return ;
	}
	std::cout << "Clap Trap " << this->_name << " attacks " << target << ", causeing " << this->_attackDamage << " points of damage!" << std::endl;
	std::cout << "Clap Trap " << this->_name << " consumes " << "1" << " energy point." << std::endl;
	this->_energyPoints--;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	std::cout << "Clap Trap " << this->_name << " loses " << amount << " points of damage!" << std::endl;

}

void	ClapTrap::beRepaired(unsigned int amount)
{
	std::cout << "Clap Trap " << this->_name << " is repaired and regains " << amount << " hit points." << std::endl;
	std::cout << "Clap Trap " << this->_name << " consumes " << "1" << " energy point." << std::endl;
	this->_energyPoints--;
}