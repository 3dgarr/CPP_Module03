#pragma once
#include "./ClapTrap.hpp"

class FragTrap : public ClapTrap
{
	public:
		FragTrap(const std::string&);
        FragTrap(const FragTrap&);
        FragTrap& operator=(const FragTrap&);
		~FragTrap();
		void	highFiveGuys(void);

};


