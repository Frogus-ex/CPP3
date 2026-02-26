#include "DiamondTrap.hpp"

// illustration of attacks
int
main (void)
{
  ScavTrap test;
  test.guardGate ();
  test.attack ("dragon");
  test.takeDamage (50);
  test.beRepaired (50);
  test.takeDamage (150);

  ScavTrap test2 ("Tom");
  test2.attack ("dragon serpent");
  for (int i = 0; i < 50; i++)
    test2.attack ("dragon serpent");

  // illustration of copy assignement and constructor
  ScavTrap test3 (test2);
  test3.attack ("dragon");
  test3 = test;
  test3.attack ("dragon");

  DiamondTrap test4;
  test4.attack("Gemstone guardian");
  test4.takeDamage(20);
  test4.whoAmI();
}