#pragma once
#include "FragTrap.hpp"

class DiamondTrap : public ScavTrap, public FragTrap
{
private:
  std::string _name;
public:
  DiamondTrap ();
  DiamondTrap (std::string name);
  ~DiamondTrap ();
  DiamondTrap (const DiamondTrap &copy);
  DiamondTrap &operator= (const DiamondTrap &other);
  void attack(const std::string &target);
  void whoAmI ();
};