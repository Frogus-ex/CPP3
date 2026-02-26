#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap () : ClapTrap("DiamondTrap_clap_name")
{
  _name = "DiamondTrap";
  std::cout << "DiamondTrap default constructor called\n";
  _hitPoint = FragTrap::_init_hit_point;
  _energyPoint = ScavTrap::_init_energy_point;
  _attackDamage = FragTrap::_init_attack_damage;
  print_stat();
}

DiamondTrap::DiamondTrap (std::string name)
    : ClapTrap (name + "_clap_name"), ScavTrap (), FragTrap ()
{
  _name = name;
  std::cout << "Diamond constructor called\n";
  _hitPoint = FragTrap::_init_hit_point;
  _energyPoint = ScavTrap::_init_energy_point;
  _attackDamage = FragTrap::_init_attack_damage;
  print_stat();
}

DiamondTrap::~DiamondTrap ()
{
  std::cout << "DiamondTrap destructor called\n";
}

DiamondTrap::DiamondTrap (const DiamondTrap &copy) { *this = copy; }

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

void DiamondTrap::attack(const std::string &target)
{
    ScavTrap::attack(target);
}

void
DiamondTrap::whoAmI ()
{
  std::cout << GREEN << "my name is " << BOLDYELLOW << _name << GREEN
            << "\nmy robot name is " << BOLDYELLOW << ClapTrap::_name << "\n"
            << RESET;
  print_stat();
}