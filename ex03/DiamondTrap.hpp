/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: athonda <athonda@student.42singapore.sg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/12 00:43:38 by athonda           #+#    #+#             */
/*   Updated: 2025/05/13 21:14:49 by athonda          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "FragTrap.hpp"

class DiamondTrap :
	public ScavTrap,
	public FragTrap
{
public:
	DiamondTrap(const std::string &name);
	DiamondTrap(const DiamondTrap &other);
	DiamondTrap	&operator=(const DiamondTrap &other);
	~DiamondTrap();

	void	whoAmI();
private:
	std::string	_name;
	DiamondTrap();
};