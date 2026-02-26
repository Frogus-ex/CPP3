#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap ()
{
  _name = "DiamondTrap";
  std::cout << "DiamondTrap default constructor called\n";
}

DiamondTrap::DiamondTrap (std::string name)
    : ClapTrap (name + "_clapname"), ScavTrap (name),FragTrap (name)
{
  _name = name;
  std::cout << "Diamond constructor called\n";
}

DiamondTrap::~DiamondTrap ()
{
  std::cout << "DiamondTrap destructor called\n";
}

DiamondTrap::DiamondTrap(const DiamondTrap &copy){
    *this = copy;
}

DiamondTrap &
DiamondTrap::operator= (const DiamondTrap &old)
{
  std::cout << "assignment overload called\n";
  if (this != &old)
    {
      _name = old._name;
      _hitPoint = old._hitPoint;
      _energyPoint = old._energyPoint;
      _attackDamage = old._attackDamage;
    }
  return *this;
}

void
DiamondTrap::attack (const std::string &target)
{
  if (_hitPoint > 0 || _energyPoint > 0)
    {
      std::cout << BOLDYELLOW << _name << RED
                << " talks meanfully to his opponent " << BOLDYELLOW << target
                << RED << " causing " << BOLDRED << _attackDamage
                << " emotionnal damage !\n"
                << RESET;
      _energyPoint--;
    }
  else if (_hitPoint == 0)
    std::cout << RED << "but sorrowfully " << BOLDYELLOW << _name << RED
              << " is in critical conditions...\n"
              << RESET;
  else if (_energyPoint == 0)
    std::cout << RED << "but sorrowfully " << BOLDYELLOW << _name << RED
              << " is exhausted\n"
              << RESET;
}

void
DiamondTrap::whoAmI ()
{
  std::cout << GREEN << "my name is " << BOLDYELLOW << _name << GREEN
            << "\nmy robot name is " << BOLDYELLOW << ClapTrap::_name << "\n"
            << RESET;
}