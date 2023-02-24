#include "./FragTrap.hpp"

FragTrap::FragTrap(const std::string& _name)
	: ClapTrap(_name)
{
	hitPoints = 100;
	energyPoints = 100;
	attackDamage = 30;
	std::cout << "Parameterized Constructor of FragTrap called" << std::endl;
}

FragTrap::~FragTrap()
{
	std::cout << "Destructor of FragTrap called" << std::endl;
}

FragTrap::FragTrap(const FragTrap& rhs) : ClapTrap(rhs)
{
	std::cout << "Copy Constructor of FragTrap called" << std::endl;
	name = rhs.name;
	hitPoints    = rhs.hitPoints;
	energyPoints = rhs.energyPoints;
	attackDamage = rhs.attackDamage;
}

FragTrap& FragTrap::operator=(const FragTrap& rhs)
{
	std::cout << "Operator assignment of FragTrap called" << std::endl;
	if (this == &rhs)
		return (*this);
	name = rhs.name;
	hitPoints = rhs.hitPoints;
	energyPoints = rhs.energyPoints;
	attackDamage = rhs.attackDamage;
	return (*this);
}


void	FragTrap::highFiveGuys(void)
{
	std::cout << "FragTrap " << name << " says ✋" << std::endl;
}