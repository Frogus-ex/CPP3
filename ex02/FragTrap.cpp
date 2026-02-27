#include "FragTrap.hpp"

FragTrap::FragTrap ()
{
  _hitPoint = 100;
  _energyPoint = 100;
  _attackDamage = 30;
  std::cout << "FragTrap default constructor called\n";
}

FragTrap::FragTrap (std::string name) : ClapTrap (name)
{
  _hitPoint = 100;
  _energyPoint = 100;
  _attackDamage = 30;
  std::cout << "Fragtrap constructor called\n";
}

FragTrap::~FragTrap () {
  std::cout << "FragTrap destructor called\n";
}

FragTrap::FragTrap (const FragTrap &copy)
{
  std::cout << "FragTrap copy constructor called\n";
  *this = copy;
}

FragTrap &
FragTrap::operator= (const FragTrap &old)
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
FragTrap::highFivesGuys ()
{
  std::cout << BOLDYELLOW << _name << GREEN
            << " Lets do a really positive high five all together !\n"
            << RESET;
}
