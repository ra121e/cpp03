/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: athonda <athonda@student.42singapore.sg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/08 19:27:29 by athonda           #+#    #+#             */
/*   Updated: 2025/05/09 09:34:24 by athonda          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int	main(void)
{
	std::string name = "honda";
	ClapTrap	a(name);

	a.attack("Bob");
	a.takeDamage(2);
	a.beRepaired(3);

	return (0);
}