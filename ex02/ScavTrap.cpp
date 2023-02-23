#include "./ScavTrap.hpp"

ScavTrap::ScavTrap(const std::string& _name) : ClapTrap(_name)
{
	hitPoints = 100;
	energyPoints = 50;
	attackDamage = 20;
	std::cout << __PRETTY_FUNCTION__ << std::endl;
}

ScavTrap::~ScavTrap()
{
	std::cout << __PRETTY_FUNCTION__ << std::endl;
}

void	ScavTrap::attack(const std::string& target)
{
	if (energyPoints == 0)
	{
		std::cout << "ScavTrap " << this->get_name() << " has no energy to attack!" << std::endl;
	}
	else if (hitPoints == 0)
	{
		std::cout << "ScavTrap " << this->get_name() << " has no hitPoints to attack!" << std::endl;
	}
	else
	{
		std::cout << "ScavTrap " << name << " attacks " << target << ", causing " << attackDamage << " points of damage!" << std::endl;
		energyPoints--;
	}
}

void ScavTrap::guardGate(void)
{
	std::cout << "ScavTrap " << name << " is now in Gatekeeper mode" << std::endl;
}
