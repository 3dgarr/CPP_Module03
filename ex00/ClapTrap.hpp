#pragma once
#include <iostream>

class ClapTrap
{
	public:
        void			attack(const std::string& target);
        void			takeDamage(unsigned int amount);
        void			beRepaired(unsigned int amount);
		unsigned int	get_hitPoints() const;
		unsigned int	get_energyPoints() const;
		unsigned int	get_attackDamage() const;
		std::string		get_name() const;

    public:
        ClapTrap();
        ClapTrap(const std::string&);
        ClapTrap(const ClapTrap&);
        ClapTrap& operator=(const ClapTrap&);
        ~ClapTrap();

    private:
        std::string		name;
		unsigned int	hitPoints;
        unsigned int	energyPoints;
        unsigned int    attackDamage;

};

ClapTrap::ClapTrap()
	:	name("gago"),
		hitPoints(10),
		energyPoints(10),
		attackDamage(0)
{
	std::cout << "Default Constructor called" << std::endl;
};

ClapTrap::ClapTrap(const std::string& __name)
	:	name(__name),
		hitPoints(10),
		energyPoints(10),
		attackDamage(0)
{
	std::cout << "Parameterized Constructors  called" << std::endl;
};

        
ClapTrap::ClapTrap(const ClapTrap& rhs)
	:	name(rhs.get_name())

{
	std::cout << "Copy Constructors  called" << std::endl;


}


ClapTrap::~ClapTrap()
{
};

unsigned int	ClapTrap::get_attackDamage() const
{
	return (attackDamage);
};

unsigned int	ClapTrap::get_energyPoints() const
{
	return (energyPoints);
};
unsigned int	ClapTrap::get_hitPoints() const
{
	return (hitPoints);
}

std::string		ClapTrap::get_name() const
{
	return (name);
}