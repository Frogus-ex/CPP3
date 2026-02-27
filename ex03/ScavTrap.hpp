#pragma once
#include "ClapTrap.hpp"

class ScavTrap : virtual public ClapTrap
{
protected:
    static const unsigned int _init_hit_point = 100;
    static const unsigned int _init_energy_point = 50;
    static const unsigned int _init_attack_damage = 20;
public:
  ScavTrap ();
  ScavTrap (std::string name);
  ~ScavTrap ();
  ScavTrap (const ScavTrap &copy);
  ScavTrap &operator= (const ScavTrap &other);
  void guardGate ();
  virtual void attack (const std::string &target);
};
