#include "ClapTrap.hpp"
#include "Colors.hpp"

ClapTrap::ClapTrap ()
    : _name ("random"), _hitPoint (10), _energyPoint (10), _attackDamage (0)
{
  std::cout << "default constructor called\n";
}

ClapTrap::ClapTrap (std::string name)
    : _name (name), _hitPoint (10), _energyPoint (10), _attackDamage (0)
{
  std::cout << "Constructor called\n";
}

ClapTrap::~ClapTrap () { std::cout << "Destructor called\n"; }

ClapTrap::ClapTrap (const ClapTrap &copy)
{
  std::cout << "copy constructor called\n";
  *this = copy;
}

ClapTrap &
ClapTrap::operator= (const ClapTrap &old)
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
ClapTrap::attack (const std::string &target)
{
  if (_hitPoint > 0 || _energyPoint > 0)
    {
      std::cout << BOLDYELLOW << _name << RED << " attacks " << BOLDYELLOW
                << target << RED << " causing " << BOLDRED << _attackDamage
                << " points of damage !\n"
                << RESET;
      _energyPoint--;
    }
  else if (_hitPoint == 0)
    std::cout << RED << "but unfortunatly " << BOLDYELLOW << _name << RED
              << " is dead...\n"
              << RESET;
  else if (_energyPoint == 0)
    std::cout << RED << "but unfortunatly " << BOLDYELLOW << _name << RED
              << " as no more energie points\n"
              << RESET;
}

void
ClapTrap::takeDamage (unsigned int amount)
{
  if (amount < 0)
    std::cout << MAGENTA
              << "nothing happens the attackers strength is negative BOOOUH\n"
              << RESET;
  else if (amount >= _hitPoint)
    {
      _hitPoint = 0;
      std::cout << BOLDYELLOW << _name << RED
                << " as taken too many damage and is now DEAD\n"
                << RESET;
    }
  else if (_hitPoint > amount)
    {
      _hitPoint -= amount;
      std::cout << BOLDYELLOW << _name << RED << " as taken " << amount
                << " but is still standing\n"
                << RESET;
    }
  else
    std::cout << BOLDWHITE << "WHAT HAVE YOU DONE TO HIM !\n" << RESET;
}

void
ClapTrap::beRepaired (unsigned int amount)
{
  if (amount < 0)
    std::cout << BOLDYELLOW << _name << WHITE << " failed to be repaired\n"
              << RESET;
  else
    {
      _hitPoint += amount;
      std::cout << BOLDYELLOW << _name << GREEN << " regain " << amount
                << " hitpoints from reparations\n"
                << RESET;
    }
}