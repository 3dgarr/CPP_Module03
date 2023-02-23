#pragma once
#include "./ClapTrap.hpp"


class ScavTrap : public ClapTrap
{
	public:
		void	attack(const std::string&);
		void	guardGate(void);
	public:
		ScavTrap(const std::string&);
		~ScavTrap();
	private:

};

