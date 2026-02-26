#include "ScavTrap.hpp"

class FragTrap : virtual public ClapTrap
{
private:
public:
  FragTrap ();
  FragTrap (std::string name);
  ~FragTrap ();
  FragTrap (const FragTrap &copy);
  FragTrap &operator= (const FragTrap &other);
  void highFivesGuys ();
  void attack (const std::string &target);
};