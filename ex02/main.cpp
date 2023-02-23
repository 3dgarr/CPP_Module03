#include "./ClapTrap.hpp"
#include "./ScavTrap.hpp"
#include "./FragTrap.hpp"

int main()
{
	// ClapTrap	a("vcho");
	// std::cout << "name         : " << a.get_name() << std::endl;
	// std::cout << "energy       : " << a.get_energyPoints() << std::endl;
	// std::cout << "attackDamage : " << a.get_attackDamage() << std::endl;
	// std::cout << "hitpoints    : " << a.get_hitPoints() << std::endl;
	// std::cout << "========================" << std::endl;
	// for (size_t i = 0; i < 4; i++)
	// 	a.attack("bgo");

	ScavTrap	f("gogo");
	FragTrap	b("bobo");

	std::cout << "name         : " << b.get_name() << std::endl;
	std::cout << "energy       : " << b.get_energyPoints() << std::endl;
	std::cout << "attackDamage : " << b.get_attackDamage() << std::endl;
	std::cout << "hitpoints    : " << b.get_hitPoints() << std::endl;
	std::cout << "========================" << std::endl;
		// for (size_t i = 0; i < 102; i++)
		// 	b.beRepaired(1);
	std::cout << "========================" << std::endl;
	b.highFiveGuys();
	b.highFiveGuys();
	b.highFiveGuys();
	b.highFiveGuys();
	f.guardGate();
	f.guardGate();
	f.guardGate();
	f.guardGate();

	
}
