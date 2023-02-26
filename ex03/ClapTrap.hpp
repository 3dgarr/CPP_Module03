#pragma once
#include <iostream>

class ClapTrap
{
	public:
        virtual void	attack(const std::string& target);
        void			takeDamage(unsigned int amount);
        void			beRepaired(unsigned int amount);
    public:
        ClapTrap();
        ClapTrap(const std::string&);
        ClapTrap(const ClapTrap&);
        ClapTrap& operator=(const ClapTrap&);
        virtual	~ClapTrap();

    protected:
        std::string		name;
		unsigned int	hitPoints;
        unsigned int	energyPoints;
        unsigned int    attackDamage;

};
