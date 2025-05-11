/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: athonda <athonda@student.42singapore.sg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/11 20:36:44 by athonda           #+#    #+#             */
/*   Updated: 2025/05/11 20:44:04 by athonda          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "FragTrap.hpp"

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


	std::cout << "\n=== FragTrap Tests ===" << std::endl;
	FragTrap frag("FragHONDA");
	frag.displayParam();

	//Attack
	frag.attack("Xuan Zhi");
	frag.displayParam();

	//damage
	frag.takeDamage(30);
	frag.displayParam();

	//repair
	frag.beRepaired(15);
	frag.displayParam();

	//FragTrap own function
//	frag.guardGate();

	//attack attack attack attack....
	std::cout << "\n--- iterate attack untill FragTrap Energy ---" << std::endl;
	for (int i = 0; i < 51; ++i)
	{
		frag.attack("Alvin");
	}
	frag.displayParam();

	//attack with no energy
	frag.attack("Wilson");

	//damage fatal
	std::cout << "\n--- FragTrap Taking Fatal Damage ---" << std::endl;
	frag.takeDamage(120);
	frag.displayParam();

	//No HP
	frag.attack("Ming Jun");
	frag.beRepaired(10);

	// コンストラクタ・デストラクタのチェーンテストを呼び出す
//	test_chaining();
	// main関数終了時、clap, fragインスタンスのデストラクタが呼び出される
	std::cout << "\n--- End of Main ---" << std::endl;

	return (0);
}
