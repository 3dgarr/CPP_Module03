#include "./ClapTrap.hpp"

ClapTrap::ClapTrap()
	: name("gago"),
	  hitPoints(10),
	  energyPoints(10),
	  attackDamage(0)
{
	std::cout << "Default Constructor called" << std::endl;
	// std::cout << __PRETTY_FUNCTION__ << std::endl;

};

ClapTrap::ClapTrap(const std::string &__name)
	: name(__name),
	  hitPoints(10),
	  energyPoints(10),
	  attackDamage(0)
{
	std::cout << "Parameterized Constructor  called" << std::endl;
	// std::cout << __PRETTY_FUNCTION__ << std::endl;
};

ClapTrap::ClapTrap(const ClapTrap &rhs)
	: name(rhs.name),
	  hitPoints(rhs.hitPoints),
	  energyPoints(rhs.energyPoints),
	  attackDamage(rhs.attackDamage)
{
	std::cout << "Copy Constructor  called" << std::endl;
	// std::cout << __PRETTY_FUNCTION__ << std::endl;

}

ClapTrap &ClapTrap::operator=(const ClapTrap &rhs)
{
	std::cout << "Operator assignment called" << std::endl;
	// std::cout << __PRETTY_FUNCTION__ << std::endl;
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
	std::cout << "Destructor  called" << std::endl;
	// std::cout << __PRETTY_FUNCTION__ << std::endl;

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
	// std::cout << __PRETTY_FUNCTION__ << std::endl;
	if (hitPoints == 0)
	{
		std::cout << name << " is already dead!" << std::endl;
	}
	else
	{
		std::cout << name << " takes " << amount << " of damage" << std::endl;
		if (hitPoints >= amount)
			hitPoints -= amount;
		else
			hitPoints = 0;
		std::cout << "Now he have " << hitPoints << " hitPoint" << std::endl;
	}
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	// std::cout << __PRETTY_FUNCTION__ << std::endl;
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

/*==============================================================*/

unsigned int ClapTrap::get_attackDamage() const
{
	return (attackDamage);
};

unsigned int ClapTrap::get_energyPoints() const
{
	return (energyPoints);
};
unsigned int ClapTrap::get_hitPoints() const
{
	return (hitPoints);
}

std::string ClapTrap::get_name() const
{
	return (name);
}


