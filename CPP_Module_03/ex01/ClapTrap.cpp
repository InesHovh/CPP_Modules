#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
    std::cout << "ClapTrap Default constructor!!!" << std::endl;

    name = "ClapTrap";
    hit_points = 10;
    energy_points = 10;
    attack_demage = 0;
}

ClapTrap::ClapTrap(std::string _name) : name(_name)
{
    std::cout << "ClapTrap Default constructor, name: " << name << "!!!" << std::endl;

    hit_points = 10;
    energy_points = 10;
    attack_demage = 0;
}

ClapTrap::ClapTrap(std::string _name, int h, int e, int d) : name(_name), hit_points(h), energy_points(e), attack_demage(d)
{
    std::cout << "ClapTrap constructor, name: " << name << "!!!" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &cp)
{
    std::cout << "ClapTrap Copy constructor!!!" << std::endl;

    *this = cp;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &ref)
{
    std::cout << "ClapTrap Copy assignment operator!!!" << std::endl;

    name = ref.name;
    hit_points = ref.hit_points;
    energy_points = ref.energy_points;
    attack_demage = ref.attack_demage;

    return (*this);
}

void ClapTrap::attack(const std::string &target)
{
    if (hit_points <= 0 || energy_points <= 0)
    {
        std::cout << "ClapTrap: Don't have any hit point or energy point!!!" << std::endl;
        std::cout << "ClapTrap: Hit point: " << hit_points << std::endl;
        std::cout << "ClapTrap: Energy point: " << energy_points << std::endl;
        
        return;
    }
    std::cout << "ClapTrap " << name << " attacks " << target << ", causing " << attack_demage <<
    " points of damage!" << std::endl;

    energy_points--;
}

void ClapTrap::takeDamage(unsigned int amount)
{
    std::cout << "ClapTrap attacks, then it's target to lose " << amount << " hit points!" << std::endl;

    hit_points -= amount;
}

void ClapTrap::beRepaired(unsigned int amount)
{
    std::cout << "ClapTrap repairs itself, then it gets " << amount << " hit points back!" << std::endl;

    hit_points += amount;
    energy_points--;
}

ClapTrap::~ClapTrap() {}