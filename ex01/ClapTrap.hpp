/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: athonda <athonda@student.42singapore.sg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/11 16:14:40 by athonda           #+#    #+#             */
/*   Updated: 2025/05/13 21:02:28 by athonda          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>

class ClapTrap
{
public:
	ClapTrap(const std::string &name);
	ClapTrap(const ClapTrap &a);
	ClapTrap	&operator=(const ClapTrap &other);
	virtual ~ClapTrap();

	virtual void	attack(const std::string &target);
	virtual void	takeDamage(unsigned int amount);
	virtual void	beRepaired(unsigned int amount);

	virtual void	displayParam();

protected:
	std::string	_name;
	int			_hitPoints;
	int			_energyPoints;
	int			_attackDamage;

	ClapTrap();
};
