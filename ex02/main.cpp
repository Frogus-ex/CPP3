#include "FragTrap.hpp"

// illustration of attacks
int
main (void)
{
  FragTrap test;
  test.attack ("dragon");
  test.takeDamage (50);
  test.beRepaired (50);
  test.takeDamage (150);

  FragTrap test2 ("Tom");
  test2.attack ("dragon serpent");
  for (int i = 0; i < 100; i++)
    test2.attack ("dragon serpent");

  // illustration of the polymorphism
  ClapTrap *ptr = new FragTrap;
  ptr->attack ("realm");
  delete ptr;

  // illustration of copy assignement and constructor
  FragTrap test3 (test2);
  test3.attack ("dragon");
  test3.highFivesGuys();
  test3 = test;
  test3.attack ("dragon");
}
