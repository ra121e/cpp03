/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: athonda <athonda@student.42singapore.sg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/08 19:12:51 by athonda           #+#    #+#             */
/*   Updated: 2025/05/11 19:02:37 by athonda          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(const std::string &name) :
	_name(name),
	_hitPoints(10),
	_energyPoints(10),
	_attackDamage(0)
{
	std::cout << "ClapTrap " << _name << " Default constructor called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &a)
{
	std::cout << "ClapTrap " _name << " copy constructor called" << std::endl;
	*this = a;
}

ClapTrap	&ClapTrap::operator=(const ClapTrap &other)
{
	std::cout << "ClapTrap " << _name " copy asignment operator called" << std::endl;
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
	std::cout << "ClapTrap " << _name << " destructor called" << std::endl;
}

void	ClapTrap::attack(const std::string &target)
{
	if (this->_hitPoints <= 0)
	{
		std::cout << "Clap Trap " << this->_name << " is dead." << std::endl;
		return ;
	}
	if (this->_energyPoints <= 0)
	{
		std::cout << "Clap Trap " << this->_name << " can not attack (no enegry point)." << std::endl;
		return ;
	}
	std::cout << "Clap Trap " << this->_name << " attacks " << target << ", causeing " << this->_attackDamage << " points of damage!" << std::endl;
	std::cout << "Clap Trap " << this->_name << " consumes " << "1" << " energy point." << std::endl;
	this->_energyPoints--;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	if (this->_hitPoints <= 0)
	{
		std::cout << "Clap Trap " << this->_name << " has not gotten damage (dead)." << std::endl;
		return ;
	}
	if (static_cast<unsigned int>(this->_hitPoints) <= amount)
	{
		this->_hitPoints = 0;
	}
	else
	{
		this->_hitPoints = this->_hitPoints - static_cast<int>(amount);
	}
	std::cout << "Clap Trap " << this->_name << " got " << amount << " points of damage!" << std::endl;

}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (this->_hitPoints <= 0)
	{
		std::cout << "Clap Trap " << this->_name << " can not be repaired (dead)." << std::endl;
		return ;
	}
	if (this->_energyPoints <= 0)
	{
		std::cout << "Clap Trap " << this->_name << " can not be repaired (no energy point)." << std::endl;
		return ;
	}
	std::cout << "Clap Trap " << this->_name << " is repaired and regains " << amount << " hit points." << std::endl;
	std::cout << "Clap Trap " << this->_name << " consumes " << "1" << " energy point." << std::endl;
	this->_hitPoints += static_cast<int>(amount);
	this->_energyPoints--;
}

void	ClapTrap::displayParam(void)
{
	std::cout << "==================================" << std::endl;
	std::cout << _name << " :" << std::endl;
	std::cout << "HP: " << _hitPoints << std::endl;
	std::cout << "EP: " << _energyPoints << std::endl;
	std::cout << "AD: " << _attackDamage << std::endl;
	std::cout << "==================================" << std::endl;
}