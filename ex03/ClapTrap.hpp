#pragma once
#include <iostream>
#include <string>

#define RESET "\033[m"
#define RED "\033[31m"
#define GREEN "\033[32m"
#define BLUE "\033[34m"
#define MAGENTA "\033[35m"
#define BOLDYELLOW "\033[1m\033[33m"
#define BOLDRED "\033[1m\033[31m"
#define BOLDWHITE "\033[1m\033[37m"

class ClapTrap
{
protected:
  std::string _name;
  unsigned int _hitPoint;
  unsigned int _energyPoint;
  unsigned int _attackDamage;

public:
  ClapTrap ();
  ClapTrap (std::string _name);
  virtual ~ClapTrap ();
  ClapTrap (const ClapTrap &copy);
  ClapTrap &operator= (const ClapTrap &other);
  void print_stat();
  void attack (const std::string &target);
  void takeDamage (unsigned int amout);
  void beRepaired (unsigned int amout);
};
