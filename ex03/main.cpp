/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: athonda <athonda@student.42singapore.sg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/12 15:54:22 by athonda           #+#    #+#             */
/*   Updated: 2025/05/12 23:23:32 by athonda          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int	main(void)
{
	DiamondTrap diam("DiamHONDA");
	std::cout << "=== ClapTrap Tests ===" << std::endl;
	ClapTrap clap("ClapHONDA");
	clap.displayParam(); // 初期状態を表示
	// 攻撃テスト
	clap.attack("Hui");
	clap.displayParam();
	// ダメージを受けるテスト
	clap.takeDamage(5);
	clap.displayParam();
	// 修理テスト
	clap.beRepaired(3);
	clap.displayParam();
	// エネルギーがなくなるまで攻撃
	std::cout << "\n--- Draining ClapTrap Energy ---" << std::endl;
	for (int i = 0; i < 8; ++i) { // 初期EP 10 - 1(attack) - 1(repair) = 8回攻撃可能
	    clap.attack("Darren");
	}
	clap.displayParam();
	// エネルギーがない状態での攻撃テスト
	clap.attack("Benjamin");
	// ダメージを受けてHPを0にする
	std::cout << "\n--- ClapTrap Taking Fatal Damage ---" << std::endl;
	clap.takeDamage(100); // 残りHP以上のダメージ
	clap.displayParam();
	// HPがない状態でのアクションテスト
	clap.attack("Teck Chen");
	clap.beRepaired(5);
	clap.takeDamage(1);
	std::cout << "\n=== ScavTrap Tests ===" << std::endl;
	ScavTrap scav("ScavHONDA");
	scav.displayParam(); // ScavTrapの初期状態 (HP100, EP50, AD20) を確認
	// ScavTrapの攻撃テスト
	scav.attack("Kuma");
	scav.displayParam();
	// ScavTrapのダメージテスト
	scav.takeDamage(30);
	scav.displayParam();
	// ScavTrapの修理テスト
	scav.beRepaired(15);
	scav.displayParam();
	// ScavTrap独自の特殊能力テスト
	scav.guardGate();
	// ScavTrapでエネルギーがなくなるまで攻撃
	std::cout << "\n--- Draining ScavTrap Energy ---" << std::endl;
	for (int i = 0; i < 49; ++i) { // 初期EP 50 - 1(attack) = 49回攻撃可能
	    scav.attack("Alvin");
	}
	scav.displayParam();
	// エネルギーがない状態でのScavTrap攻撃テスト
	scav.attack("Aung Taiza Oo");
	// ScavTrapで致命的なダメージテスト
	std::cout << "\n--- ScavTrap Taking Fatal Damage ---" << std::endl;
	scav.takeDamage(120); // 残りHP以上のダメージ
	scav.displayParam();
	// HPがない状態でのScavTrapアクションテスト
	scav.attack("Han Min Thant");
	scav.beRepaired(10);
	std::cout << "\n=== FragTrap Tests ===" << std::endl;
	FragTrap frag("FragHONDA");
	frag.displayParam(); // FragTrapの初期状態 (HP100, EP100, AD30) を確認
	// FragTrapの攻撃テスト
	frag.attack("Thant Htet Aung");
	frag.displayParam();
	// FragTrapのダメージテスト
	frag.takeDamage(40);
	frag.displayParam();
	// FragTrapの修理テスト
	frag.beRepaired(20);
	frag.displayParam();
	// FragTrap独自の特殊能力テスト
	frag.highFivesGuys();
	// FragTrapでエネルギーがなくなるまで攻撃
	std::cout << "\n--- Draining FragTrap Energy ---" << std::endl;
	for (int i = 0; i < 99; ++i) { // 初期EP 100 - 1(attack) = 99回攻撃可能
	    frag.attack("Alvin");
	}
	frag.displayParam();
	// エネルギーがない状態でのFragTrap攻撃テスト
	frag.attack("Jason");
	// FragTrapで致命的なダメージテスト
	std::cout << "\n--- FragTrap Taking Fatal Damage ---" << std::endl;
	frag.takeDamage(200); // 残りHP以上のダメージ
	frag.displayParam();
	// HPがない状態でのFragTrapアクションテスト
	frag.attack("God");
	frag.beRepaired(10);
	std::cout << "\n=== DiamondTrap Tests ===" << std::endl;
	DiamondTrap diamond("DiamHONDA2");
	diamond.displayParam(); // DiamondTrapの初期状態 (HP100, EP50, AD30) を確認
	// DiamondTrap独自の特殊能力テスト
	diamond.whoAmI();
	// DiamondTrapの攻撃テスト (ScavTrapのattackが呼ばれるはず)
	diamond.attack("Iskandar");
	diamond.displayParam();
	// DiamondTrapのダメージテスト (ClapTrapから継承)
	diamond.takeDamage(25);
	diamond.displayParam();
	// DiamondTrapの修理テスト (ClapTrapから継承)
	diamond.beRepaired(10);
	diamond.displayParam();
	// DiamondTrapが継承した特殊能力テスト
	diamond.guardGate(); // ScavTrapから継承
	diamond.highFivesGuys(); // FragTrapから継承
	// DiamondTrapでエネルギーがなくなるまで攻撃
	std::cout << "\n--- Draining DiamondTrap Energy ---" << std::endl;
	// DiamondTrapのエネルギーはScavTrapから継承した50
	for (int i = 0; i < 49; ++i) { // 初期EP 50 - 1(attack) = 49回攻撃可能
	     diamond.attack("Alvin");
	}
	diamond.displayParam();
	// エネルギーがない状態でのDiamondTrap攻撃テスト
	diamond.attack("Soon Yii");
//	 コンストラクタ・デストラクタのチェーンテストを呼び出す
//	test_scav_chaining(); // ScavTrapのチェーンテスト
//	test_frag_chaining(); // FragTrapのチェーンテスト
//	test_diamond_chaining(); // DiamondTrapのチェーンテスト (ClapTrapが一度だけ構築されることを確認)


	// main関数終了時、clap, scav, frag, diamondインスタンスのデストラクタが呼び出される
	std::cout << "\n--- End of Main ---" << std::endl;

	return (0);
}