#include "ClapTrap.hpp"

int	main(void)
{
	//illustration of attacks
	ClapTrap ben("Tom");
	ben.attack("dragons");
	ben.attack("dragons");
	ben.attack("dragons");
	ben.attack("dragons");
	ben.attack("dragons");
	ben.attack("dragons");
	ben.attack("dragons");
	ben.attack("dragons");
	ben.attack("dragons");
	ben.attack("dragons");
	ben.attack("dragons");

	//illustration of repaired + no name
	ClapTrap test;
	test.beRepaired(1);
	test.beRepaired(1);
	test.beRepaired(1);
	test.beRepaired(1);
	test.beRepaired(1);
	test.beRepaired(1);
	test.beRepaired(1);
	test.beRepaired(1);
	test.beRepaired(1);
	test.beRepaired(1);
	test.beRepaired(1);

	//ilustration of copy constructor & copy assignment operator
	ClapTrap second(ben);
	second.beRepaired(1);
	second.attack("les dieux");

	ClapTrap third;
	third.attack("the reality realm");
	third = ben;
	third.attack("the reality realm");

	//illustration of death
	third.takeDamage(10);
	third.takeDamage(50);
}