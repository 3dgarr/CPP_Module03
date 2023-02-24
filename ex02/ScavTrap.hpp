#pragma once
#include "./ClapTrap.hpp"


class ScavTrap : public ClapTrap
{
	public:
		void	attack(const std::string&);
		void	guardGate(void) const;
	public:
		ScavTrap(const std::string&);
        ScavTrap(const ScavTrap&);
        ScavTrap& operator=(const ScavTrap&);
		~ScavTrap();
	private:

};
