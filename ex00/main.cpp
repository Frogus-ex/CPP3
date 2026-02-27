#include "ClapTrap.hpp"

int
main (void)
{
  // illustration of attacks
  ClapTrap tom ("Tom");
  // tom.print_stat();
  tom.attack ("dragons");
  tom.attack ("dragons");
  tom.attack ("dragons");
  tom.attack ("dragons");
  tom.attack ("dragons");
  tom.attack ("dragons");
  tom.attack ("dragons");
  tom.attack ("dragons");
  tom.attack ("dragons");
  tom.attack ("dragons");
  tom.attack ("dragons");
  // tom.print_stat();

  // illustration of repaired + no name
  ClapTrap test;
  // test.print_stat();
  test.beRepaired (1);
  test.beRepaired (1);
  test.beRepaired (1);
  test.beRepaired (1);
  test.beRepaired (1);
  test.beRepaired (1);
  test.beRepaired (1);
  test.beRepaired (1);
  test.beRepaired (1);
  test.beRepaired (1);
  test.beRepaired (1);
  // test.print_stat();

  // ilustration of copy constructor & copy assignment operator
  ClapTrap second (tom);
  second.beRepaired (1);
  second.attack ("les dieux");

  ClapTrap third;
  third = tom;
  third.beRepaired (1);
  third.attack ("the reality realm");

  // illustration of death
  third.takeDamage (10);
  third.takeDamage (50);
}
