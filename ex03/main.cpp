#include "./ClapTrap.hpp"
#include "./ScavTrap.hpp"
#include "./FragTrap.hpp"
#include "./DiamondTrap.hpp"

int main()
{

	DiamondTrap	d("bo");
	std::cout << "========================" << std::endl;
	d.attack("smbo");
	d.whoAmI();
	std::cout << "========================" << std::endl;
	d.highFiveGuys();
	d.takeDamage(65);
	d.whoAmI();

	std::cout << "========================" << std::endl;
	c.highFiveGuys();
	f.guardGate();

	
}
