/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: athonda <athonda@student.42singapore.sg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/11 19:44:24 by athonda           #+#    #+#             */
/*   Updated: 2025/05/12 23:25:29 by athonda          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "ClapTrap.hpp"

class FragTrap :
	virtual public ClapTrap
{
public:
	FragTrap(const std::string &name);
	FragTrap(const FragTrap &other);
	FragTrap	&operator=(const FragTrap &other);
	~FragTrap();

	void	highFivesGuys(void);

private:
};