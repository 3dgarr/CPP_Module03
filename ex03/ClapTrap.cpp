#include "./ClapTrap.hpp"

ClapTrap::ClapTrap()
	: name("unknown"),
	  hitPoints(10),
	  energyPoints(10),
	  attackDamage(0)
{
	std::cout << "Default Constructor of ClapTrap called" << std::endl;
};

ClapTrap::ClapTrap(const std::string &__name)
	: name(__name),
	  hitPoints(10),
	  energyPoints(10),
	  attackDamage(0)
{
	std::cout << "Parameterized Constructor of ClapTrap called" << std::endl;
};

ClapTrap::ClapTrap(const ClapTrap &rhs)
	: name(rhs.name),
	  hitPoints(rhs.hitPoints),
	  energyPoints(rhs.energyPoints),
	  attackDamage(rhs.attackDamage)
{
	std::cout << "Copy Constructor of ClapTrap called" << std::endl;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &rhs)
{
	std::cout << "Operator assignment of ClapTrap called" << std::endl;
	if (this == &rhs)
		return (*this);
	name = rhs.name;
	hitPoints = rhs.hitPoints;
	energyPoints = rhs.energyPoints;
	attackDamage = rhs.attackDamage;
	return (*this);
}

ClapTrap::~ClapTrap()
{
	std::cout << "Destructor of ClapTrap called" << std::endl;
};
/*==============================================================*/

void ClapTrap::attack(const std::string &target)
{
	if (energyPoints == 0)
	{
		std::cout << "ClapTrap " << name << " has no energy to attack!" << std::endl;
	}
	else if (hitPoints == 0)
	{
		std::cout << "ClapTrap " << name << " has no hitPoints to attack!" << std::endl;
	}
	else
	{
		std::cout << "ClapTrap " << name << " attacks " << target << ", causing " << attackDamage << " points of damage!" << std::endl;
		energyPoints--;
	}
	// std::cout << "<<" << energyPoints << ">>" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if (hitPoints == 0)
		std::cout << name << " is already dead!" << std::endl;
	else
	{
		std::cout << name  << " takes " << amount << " of damage" << std::endl;
		if (hitPoints >= amount)
			hitPoints -= amount;
		else
			hitPoints = 0;
		std::cout << "Now he have " << hitPoints << " hitPoint" << std::endl;
	}
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (energyPoints == 0)
	{
		std::cout << name << " has no energy to repair itself!" << std::endl;
	}
	else if (hitPoints == 0)
	{
		std::cout << name << " is dead!" << std::endl;
	}
	else
	{
		std::cout << name << " reapairs itself " << amount << " hitpoint" << std::endl;
		hitPoints += amount;
		energyPoints--;
		std::cout << "Now he have " << hitPoints << " hitPoint" << std::endl;
	}
}



