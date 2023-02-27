#include "./ClapTrap.hpp"
#include "./ScavTrap.hpp"
#include "./FragTrap.hpp"

int main()
{
	ClapTrap	a("v");
	std::cout << "name         : " << a.get_name() << std::endl;
	std::cout << "energy       : " << a.get_energyPoints() << std::endl;
	std::cout << "attackDamage : " << a.get_attackDamage() << std::endl;
	std::cout << "hitpoints    : " << a.get_hitPoints() << std::endl;
	std::cout << "========================" << std::endl;
	// for (size_t i = 0; i < 4; i++)
	// 	a.attack("bo");

	
}
