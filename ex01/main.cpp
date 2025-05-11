/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: athonda <athonda@student.42singapore.sg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/10 12:11:54 by athonda           #+#    #+#             */
/*   Updated: 2025/05/11 18:55:30 by athonda          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int	main(void)
{
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
	for (int i = 0; i < 8; ++i)
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


	std::cout << "\n=== ScavTrap Tests ===" << std::endl;
	ScavTrap scav("ScavHONDA");
	scav.displayParam();

	//Attack
	scav.attack("Xuan Zhi");
	scav.displayParam();

	//damage
	scav.takeDamage(30);
	scav.displayParam();

	//repair
	scav.beRepaired(15);
	scav.displayParam();

	// ScavTrap独自の特殊能力テスト
//	scav.guardGate();

	//attack attack attack attack....
	std::cout << "\n--- Draining ScavTrap Energy ---" << std::endl;
	for (int i = 0; i < 49; ++i)
	{
		scav.attack("Alvin");
	}
	scav.displayParam();

	//attack with no energy
	scav.attack("Wilson");

	//damage fatal
	std::cout << "\n--- ScavTrap Taking Fatal Damage ---" << std::endl;
	scav.takeDamage(120);
	scav.displayParam();

	//No HP
	scav.attack("Ming Jun");
	scav.beRepaired(10);

	// コンストラクタ・デストラクタのチェーンテストを呼び出す
//	test_chaining();
	// main関数終了時、clap, scavインスタンスのデストラクタが呼び出される
	std::cout << "\n--- End of Main ---" << std::endl;

	return (0);
}
