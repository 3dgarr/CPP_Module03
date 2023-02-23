#pragma once
#include <iostream>

class ClapTrap
{
	public:
        virtual void	attack(const std::string& target);
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

    protected:
        std::string		name;
		unsigned int	hitPoints;
        unsigned int	energyPoints;
        unsigned int    attackDamage;

};
