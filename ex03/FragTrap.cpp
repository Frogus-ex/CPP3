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
  _hitPoint = _init_hit_point;
  _energyPoint = _init_energy_point;
  _attackDamage = _init_attack_damage;
  std::cout << "Fragtrap constructor called\n";
}

FragTrap::~FragTrap () { std::cout << "FragTrap destructor called\n"; }

void
FragTrap::attack (const std::string &target)
{
  if (_hitPoint > 0 && _energyPoint > 0)
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
FragTrap::highFivesGuys ()
{
  std::cout << BOLDYELLOW << _name << GREEN
            << " Lets do a really positive high five all together !\n"
            << RESET;
}