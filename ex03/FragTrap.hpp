#pragma once
#include "./ClapTrap.hpp"

class FragTrap : virtual public ClapTrap
{
	public:
		int		getInitialEnergyPoints() const;
		int		getInitialHitPoints() const;
		int		getInitialAttackDamage() const;
		void	highFiveGuys(void);
	public:
		FragTrap();
		FragTrap(const std::string&);
        FragTrap(const FragTrap&);
        FragTrap& operator=(const FragTrap&);
		virtual	~FragTrap();

};


