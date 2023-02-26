#include "./DiamondTrap.hpp"

DiamondTrap::DiamondTrap() 
		: ClapTrap()
{	
	std::cout << "Default Constructor of DiamondTrap called" << std::endl;
}

DiamondTrap::DiamondTrap(const std::string& _name)
	:	ClapTrap(_name + "_clap_name"),
		FragTrap(""),
		ScavTrap("")
{
	std::cout << "Parameterized Constructor of DiamondTrap called" << std::endl;
	this->name = _name;
	// this->hitPoints = this->FragTrap::hitPoints;      //100
	// this->energyPoints = this->ScavTrap::energyPoints;//50
	// this->attackDamage = this->FragTrap::attackDamage;//30
}

DiamondTrap::~DiamondTrap() 
{	
	std::cout << "Destructor of DiamondTrap called" << std::endl;
}

DiamondTrap&	DiamondTrap::operator=(const DiamondTrap& rhs)
{
	std::cout << "Operator assignment of DiamondTrap called" << std::endl;
	if (this == &rhs)
		return (*this);
	this->ClapTrap::name = rhs.ClapTrap::name;
	this->name = rhs.name;
	hitPoints = rhs.hitPoints;
	energyPoints = rhs.energyPoints;
	attackDamage = rhs.attackDamage;
	return (*this);
}

DiamondTrap::DiamondTrap(const DiamondTrap&	rhs)
	:	ClapTrap(rhs),
		FragTrap(rhs),
		ScavTrap(rhs)
{
	std::cout << "Copy Constructor of FragTrap called" << std::endl;
	this->ClapTrap::name = rhs.ClapTrap::name;
	this->name = rhs.name;
	hitPoints    = rhs.hitPoints;
	energyPoints = rhs.energyPoints;
	attackDamage = rhs.attackDamage;
}

void	DiamondTrap::whoAmI() const
{
	std::cout << "DiamondTraps name is " << this->name << std::endl;
	std::cout << "ClapTraps    name is " << this->ClapTrap::name << std::endl;
}

void	DiamondTrap::attack(const std::string& target)
{
	ScavTrap::attack(target);
}
