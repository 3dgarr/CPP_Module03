#pragma once
#include "./ClapTrap.hpp"


class ScavTrap : virtual public ClapTrap
{
	public:
		void	attack(const std::string&);
		void	guardGate(void) const;
		int		getInitialEnergyPoints() const;
		int		getInitialHitPoints() const;
		int		getInitialAttackDamage() const;
	public:
		ScavTrap();
		ScavTrap(const std::string&);
        ScavTrap(const ScavTrap&);
        ScavTrap& operator=(const ScavTrap&);
		virtual	~ScavTrap();
	private:

};
