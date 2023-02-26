#pragma once

#include "./ClapTrap.hpp"
#include "./ScavTrap.hpp"
#include "./FragTrap.hpp"

class DiamondTrap :	public FragTrap,
					public ScavTrap
{
	public:
		void	whoAmI(void) const;
		void	attack(const std::string&);
	public:
		DiamondTrap();
		DiamondTrap(const std::string &);
		DiamondTrap(const DiamondTrap&);
		~DiamondTrap();
		DiamondTrap&	operator=(const DiamondTrap&);
	
	private:
		/*
		Hit points (FragTrap)
		• Energy points (ScavTrap)
		• Attack damage (FragTrap)*/
		using	FragTrap::hitPoints;//100
		using	ScavTrap::energyPoints;//50
		using	FragTrap::attackDamage;//30
		std::string	name;
		
};


