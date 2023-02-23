#include "./ClapTrap.hpp"

int main()
{
	ClapTrap	a("vcho");
	std::cout << "name         : " << a.get_name() << std::endl;
	std::cout << "energy       : " << a.get_energyPoints() << std::endl;
	std::cout << "attackDamage : " << a.get_attackDamage() << std::endl;
	std::cout << "hitpoints    : " << a.get_hitPoints() << std::endl;
	std::cout << "========================" << std::endl;
	for (size_t i = 0; i < 4; i++)
		a.attack("bgo");
	a.takeDamage(2);
	a.takeDamage(3);
	a.takeDamage(4);
	// a.takeDamage(10);
	a.beRepaired(3);

	// ClapTrap	b;
	// std::cout << "name         : " << b.get_name() << std::endl;
	// std::cout << "energy       : " << b.get_energyPoints() << std::endl;
	// std::cout << "attackDamage : " << b.get_attackDamage() << std::endl;
	// std::cout << "hitpoints    : " << b.get_hitPoints() << std::endl;
	// std::cout << "========================" << std::endl;
	// b = a;
	// std::cout << "name         : " << b.get_name() << std::endl;
	// std::cout << "energy       : " << b.get_energyPoints() << std::endl;
	// std::cout << "attackDamage : " << b.get_attackDamage() << std::endl;
	// std::cout << "hitpoints    : " << b.get_hitPoints() << std::endl;
	// std::cout << "========================" << std::endl;
	
}
