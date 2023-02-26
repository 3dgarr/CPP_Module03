#pragma once
#include "./ClapTrap.hpp"

class FragTrap : virtual public ClapTrap
{
	public:
		FragTrap();
		FragTrap(const std::string&);
        FragTrap(const FragTrap&);
        FragTrap& operator=(const FragTrap&);
		~FragTrap();
		void	highFiveGuys(void);

};


