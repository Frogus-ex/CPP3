#pragma once
#include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
private:
public:
  FragTrap ();
  FragTrap (std::string name);
  ~FragTrap ();
  FragTrap (const FragTrap &copy);
  FragTrap &operator= (const FragTrap &other);
  void highFivesGuys ();
};
