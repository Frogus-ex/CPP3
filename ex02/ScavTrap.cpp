#include "ScavTrap.hpp"

ScavTrap::ScavTrap ()
{
  _hitPoint = 100;
  _energyPoint = 50;
  _attackDamage = 20;
  std::cout << "ScavTrap default constructor called\n";
}

ScavTrap::ScavTrap (std::string name) : ClapTrap (name)
{
  _hitPoint = 100;
  _energyPoint = 50;
  _attackDamage = 20;
  std::cout << "ScavTrap constructor called\n";
}

ScavTrap::~ScavTrap () { std::cout << "ScavTrap Destructor called\n"; }

ScavTrap::ScavTrap (const ScavTrap &copy)
{
  std::cout << "ScavTrap copy constructor called\n";
  *this = copy;
}

ScavTrap &
ScavTrap::operator= (const ScavTrap &old)
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
ScavTrap::attack (const std::string &target)
{
  if (_hitPoint > 0 && _energyPoint > 0)
    {
      std::cout << BOLDYELLOW << _name << RED << " Fists his opponent "
                << BOLDYELLOW << target << RED << " causing " << BOLDRED
                << _attackDamage << " irreversibile damage !\n"
                << RESET;
      _energyPoint--;
    }
  else if (_hitPoint == 0)
    std::cout << RED << "but sadly " << BOLDYELLOW << _name << RED
              << " is broken...\n"
              << RESET;
  else if (_energyPoint == 0)
    std::cout << RED << "but sadly " << BOLDYELLOW << _name << RED
              << " is too tired\n"
              << RESET;
}

void
ScavTrap::guardGate ()
{
  std::cout << BOLDYELLOW << _name << GREEN << " is in Gate keeper mode\n"
            << RESET;
}
