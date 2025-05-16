/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: athonda <athonda@student.42singapore.sg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/08 19:12:51 by athonda           #+#    #+#             */
/*   Updated: 2025/05/16 07:58:23 by athonda          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include <climits>

ClapTrap::ClapTrap()
{
	std::cout << "ClapTrap " << _name << " default constructor called" << std::endl;
}

ClapTrap::ClapTrap(const std::string &name) :
	_name(name),
	_hitPoints(10),
	_energyPoints(10),
	_attackDamage(0)
{
	std::cout << "ClapTrap " << _name << " parameterized constructor called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &a)
{
	std::cout << "ClapTrap " << _name << " copy constructor called" << std::endl;
	*this = a;
}

ClapTrap	&ClapTrap::operator=(const ClapTrap &other)
{
	std::cout << "ClapTrap " << _name << " copy asignment operator called" << std::endl;
	if (this != &other)
	{
		this->_name = other._name;
		this->_hitPoints = other._hitPoints;
		this->_energyPoints = other._energyPoints;
		this->_attackDamage = other._attackDamage;
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
		std::cout << "ClapTrap " << this->_name << " can not attack anymore...dead." << std::endl;
		return ;
	}
	if (this->_energyPoints <= 0)
	{
		std::cout << "ClapTrap " << this->_name << " can not attack (no enegry point)." << std::endl;
		return ;
	}
	this->_energyPoints--;
	std::cout << "ClapTrap " << this->_name << " attacks " << target << ", causeing " << this->_attackDamage << " points of damage!" << std::endl;
	std::cout << "ClapTrap " << this->_name << " consumes " << "1" << " energy point." << std::endl;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	if (this->_hitPoints <= 0)
	{
		std::cout << "ClapTrap " << this->_name << " has not gotten damage (dead)." << std::endl;
		return ;
	}
	if (amount > INT_MAX)
	{
		amount = 0;
		std::cout << "Damage amount should be 0~2147483647. otherwise 0." << std::endl;
	}
	if (static_cast<unsigned int>(this->_hitPoints) <= amount)
	{
		this->_hitPoints = 0;
	}
	else
	{
		this->_hitPoints = this->_hitPoints - static_cast<int>(amount);
	}
	std::cout << "ClapTrap " << this->_name << " got " << amount << " points of damage!" << std::endl;

}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (this->_hitPoints <= 0)
	{
		std::cout << "ClapTrap " << this->_name << " can not be repaired (dead)." << std::endl;
		return ;
	}
	if (this->_energyPoints <= 0)
	{
		std::cout << "ClapTrap " << this->_name << " can not be repaired (no energy point)." << std::endl;
		return ;
	}
	if (amount > INT_MAX)
	{
		amount = 0;
		std::cout << "Repair amount should be 0~2147483647. otherwise 0." << std::endl;
	}
	if (static_cast<unsigned int>(this->_hitPoints) + amount > INT_MAX)
	{
		this->_hitPoints = INT_MAX;
		std::cout << "ClapTrap " << this->_name << " is repaired and regains to MAX hit points." << std::endl;
	}
	else
	{
		this->_hitPoints += static_cast<int>(amount);
		std::cout << "ClapTrap " << this->_name << " is repaired and regains " << amount << " hit points." << std::endl;
	}
	this->_energyPoints--;
	std::cout << "ClapTrap " << this->_name << " consumes " << "1" << " energy point." << std::endl;
}

void	ClapTrap::displayParam(void)
{
	std::cout << "==================================" << std::endl;
	std::cout << _name << " :" << std::endl;
	std::cout << "HP: " << _hitPoints << std::endl;
	std::cout << "EP: " << _energyPoints << std::endl;
	std::cout << "AD: " << _attackDamage << std::endl;
	std::cout << "==================================" << std::endl << std::endl;
}