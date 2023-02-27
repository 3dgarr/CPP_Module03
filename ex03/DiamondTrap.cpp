#include "./DiamondTrap.hpp"

DiamondTrap::DiamondTrap() 
		:	ClapTrap(),
			FragTrap(),
			ScavTrap()
{	
	std::cout << "Default Constructor of DiamondTrap called" << std::endl;
}

DiamondTrap::DiamondTrap(const std::string& _name)
	:	ClapTrap(_name + "_clap_name"),
		FragTrap(_name),
		ScavTrap(_name)
{
	std::cout << "Parameterized Constructor of DiamondTrap called" << std::endl;
	this->name = _name;
	this->hitPoints = this->FragTrap::getInitialHitPoints();      
	this->energyPoints = this->ScavTrap::getInitialEnergyPoints();
	this->attackDamage = this->FragTrap::getInitialAttackDamage();
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
	// std::cout << "HitPoints: " << this->hitPoints << std::endl;
	// std::cout << "EnergyPoints: " << this->energyPoints << std::endl;
	// std::cout << "AttackDamage: " << this->attackDamage << std::endl;
}

