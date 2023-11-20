#include "DiamondTrap.hpp"

void DiamondTrap::whoAmI()
{
    if (_ep <= 0 || _hp <= 0)
        return ;
    std::cout << "My name is: " << _Name << " and my clapTrap name is: " << ClapTrap::_Name << std::endl;
}

DiamondTrap::DiamondTrap(std::string Name):ClapTrap(Name + "_clap_name")
{
    _Name = Name;
    _hp = 100;
    _ep = 100;
    _ad = 30;
    std::cout << "DiamondTrap Name is: " << _Name << std::endl;
    std::cout << "With HP of " << _hp << " And energy points of " << _ep << " and attak damage of " << _ad << "\n\n";
}

DiamondTrap::DiamondTrap()
{
    std::cout << "Default constructor called\n";
}

DiamondTrap::DiamondTrap(const DiamondTrap &other):ClapTrap(other), FragTrap(other), ScavTrap(other)
{
    std::cout << "Copy constructor called\n";
    *this = other;
}

DiamondTrap &DiamondTrap::operator=(const DiamondTrap &other)
{
    std::cout << "Copy assignment operator called\n";
    if(this != &other)
    {
        _Name = other._Name;
        _hp = other._hp;
        _ep = other._ep;
        _ad = other._ad;
    }
    return *this;
}

DiamondTrap::~DiamondTrap()
{
    std::cout << "Destructor called\n";
}