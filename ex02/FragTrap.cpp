#include "./FragTrap.hpp"

FragTrap::FragTrap(const std::string& _name)
	: ClapTrap(_name)
{
	hitPoints = 100;
	energyPoints = 100;
	attackDamage = 30;
	std::cout << __PRETTY_FUNCTION__ << std::endl;
}

FragTrap::~FragTrap()
{
	std::cout << __PRETTY_FUNCTION__ << std::endl;
}

void	FragTrap::highFiveGuys(void)
{
	std::cout << "FragTrap " << name << " says ✋" << std::endl;
}