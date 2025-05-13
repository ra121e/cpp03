/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: athonda <athonda@student.42singapore.sg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/08 19:27:29 by athonda           #+#    #+#             */
/*   Updated: 2025/05/13 09:20:19 by athonda          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int	main(void)
{
	std::string name = "honda";
	ClapTrap	a(name);
	a.displayParam();

	a.attack("Bob");
	a.displayParam();
	a.takeDamage(2);
	a.displayParam();
	a.takeDamage(-1);
	a.displayParam();
	a.takeDamage(2147483648);
	a.displayParam();
	a.beRepaired(8);
	a.displayParam();
	a.beRepaired(2147483647);
	a.displayParam();
	a.beRepaired(-1);
	a.displayParam();

	std::cout << "=== ClapTrap Tests ===" << std::endl;
	ClapTrap clap("ClapHONDA");
	clap.displayParam();

	//attack
	clap.attack("Cristopher");
	clap.displayParam();

	//damage
	clap.takeDamage(5);
	clap.displayParam();

	//repair
	clap.beRepaired(3);
	clap.displayParam();

	//hey stop!!
	std::cout << "\n--- continue attack untill EP 0 ---" << std::endl;
	for (int i = 0; i < 10; ++i)
	{
		clap.attack("Ming");
	}
	clap.displayParam();

	//attack with no energy
	clap.attack("Shanaz");

	//damage untill HP 0
	std::cout << "\n--- ClapTrap Taking Fatal Damage ---" << std::endl;
	clap.takeDamage(100);
	clap.displayParam();

	//functions with no energy
	clap.attack("Gernaine");
	clap.beRepaired(5);
	clap.takeDamage(1);
	return (0);
}