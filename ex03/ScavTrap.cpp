#include "./ScavTrap.hpp"

ScavTrap::ScavTrap(const std::string& _name) 
	: ClapTrap(_name)
{
	std::cout << "Parameterized Constructor of ScavTrap called" << std::endl;
	hitPoints = getInitialHitPoints();
	energyPoints = getInitialEnergyPoints();
	attackDamage = getInitialAttackDamage();
}

ScavTrap::ScavTrap()
	:	ClapTrap()
{
	std::cout << "Default Constructor of ScavTrap called" << std::endl;
}

ScavTrap::~ScavTrap()
{
	std::cout << "Destructor of ScavTrap called" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap& rhs)
	:	ClapTrap(rhs)
{
	std::cout << "Copy Constructor of ScavTrap called" << std::endl;
	name = rhs.name;
	hitPoints    = rhs.hitPoints;
	energyPoints = rhs.energyPoints;
	attackDamage = rhs.attackDamage;
}

ScavTrap& ScavTrap::operator=(const ScavTrap& rhs)
{
	std::cout << "Operator assignment of ScavTrap called" << std::endl;
	if (this == &rhs)
		return (*this);
	name = rhs.name;
	hitPoints = rhs.hitPoints;
	energyPoints = rhs.energyPoints;
	attackDamage = rhs.attackDamage;
	return (*this);
}

void	ScavTrap::attack(const std::string& target)
{
	if (energyPoints == 0)
	{
		std::cout << "ScavTrap " << name << " has no energy to attack!" << std::endl;
	}
	else if (hitPoints == 0)
	{
		std::cout << "ScavTrap " << name << " has no hitPoints to attack!" << std::endl;
	}
	else
	{
		std::cout << "ScavTrap " << name << " attacks " << target << ", causing " << attackDamage << " points of damage!" << std::endl;
		energyPoints--;
	}
}

void ScavTrap::guardGate(void) const
{
	std::cout << "ScavTrap " << name << " is now in Gatekeeper mode" << std::endl;
}


int		ScavTrap::getInitialEnergyPoints() const
{
	return (50);
}
int		ScavTrap::getInitialHitPoints() const
{
	return (100);
}
int		ScavTrap::getInitialAttackDamage() const
{
	return (20);
}