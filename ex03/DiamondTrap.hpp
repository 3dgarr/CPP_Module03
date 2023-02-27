#pragma once

#include "./ClapTrap.hpp"
#include "./ScavTrap.hpp"
#include "./FragTrap.hpp"

class DiamondTrap :	public FragTrap,
					public ScavTrap
{
	public:
		void	whoAmI(void) const;
		using	ScavTrap::attack;
	public:
		DiamondTrap();
		DiamondTrap(const std::string &);
		DiamondTrap(const DiamondTrap&);
		~DiamondTrap();
		DiamondTrap&	operator=(const DiamondTrap&);
	
	private:
		std::string	name;
		
};


