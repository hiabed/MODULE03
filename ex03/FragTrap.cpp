#include "FragTrap.hpp"

void FragTrap::highFivesGuys()
{
    if (_ep <= 0 || _hp <= 0)
        return ;
    std::cout << "High Five!\n";
}

FragTrap::FragTrap(std::string Name)
{
    _Name = Name;
    _hp = 100; //frag.
    _ep = 50;  //scav.
    _ad = 30;  //frag.
    std::cout << "FragTrap Name is: " << _Name << std::endl;
    std::cout << "With HP of " << _hp << " And energy points of " << _ep << " and attak damage of " << _ad << "\n\n";
}

FragTrap::FragTrap()
{
    std::cout << "Default constructor called\n";
}

FragTrap::FragTrap(const FragTrap &other):ClapTrap(other)
{
    std::cout << "Copy constructor called\n";
    *this = other;
}

FragTrap &FragTrap::operator=(const FragTrap &other)
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

FragTrap::~FragTrap()
{
    std::cout << "Destructor called\n";
}