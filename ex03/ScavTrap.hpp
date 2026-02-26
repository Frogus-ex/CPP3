#pragma once
#include "ClapTrap.hpp"
#include <iostream>
#include <string>

class ScavTrap : virtual public ClapTrap
{
private:
public:
  ScavTrap ();
  ScavTrap (std::string name);
  ~ScavTrap ();
  ScavTrap (const ScavTrap &copy);
  ScavTrap &operator= (const ScavTrap &other);
  void guardGate ();
  void attack (const std::string &target);
};