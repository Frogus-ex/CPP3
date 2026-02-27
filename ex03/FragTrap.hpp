#pragma once
#include "ScavTrap.hpp"

class FragTrap : virtual public ClapTrap
{
protected:
        static const unsigned int _init_hit_point = 100;
        static const unsigned int _init_energy_point = 100;
        static const unsigned int _init_attack_damage = 30;
public:
  FragTrap ();
  FragTrap (std::string name);
  ~FragTrap ();
  FragTrap (const FragTrap &copy);
  FragTrap &operator= (const FragTrap &other);
  void highFivesGuys ();
  void attack (const std::string &target);
};
