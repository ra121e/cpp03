/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: athonda <athonda@student.42singapore.sg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/08 19:27:29 by athonda           #+#    #+#             */
/*   Updated: 2025/05/10 20:00:41 by athonda          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int	main(void)
{
	std::string name = "honda";
	ClapTrap	a(name);

	a.attack("Bob");
	a.displayParam();
	a.takeDamage(2);
	a.displayParam();
	a.beRepaired(3);
	a.displayParam();

	return (0);
}