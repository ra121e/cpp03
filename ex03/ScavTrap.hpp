/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: athonda <athonda@student.42singapore.sg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/09 14:09:59 by athonda           #+#    #+#             */
/*   Updated: 2025/05/13 21:22:47 by athonda          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>
#include "ClapTrap.hpp"

class ScavTrap : virtual public ClapTrap
{
public:
	ScavTrap(const std::string &name);
	ScavTrap(const ScavTrap &other);
	ScavTrap	&operator=(const ScavTrap &other);
	~ScavTrap();

	void	attack(const std::string &target);
	void	guardGate() const;

protected:
	ScavTrap();
};