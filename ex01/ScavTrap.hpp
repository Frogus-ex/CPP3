#pragma once
#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
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
