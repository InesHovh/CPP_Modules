#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
    std::cout << name << "Default constructor !!!" << std::endl;

    name = "ClapTrap";
    hit_points = 10;
    energy_points = 10;
    attack_demage = 0;
}

ClapTrap::ClapTrap(std::string _name) : name(_name)
{
    std::cout << name << "Default constructor, name:" << std::endl;

    hit_points = 10;
    energy_points = 10;
    attack_demage = 0;
}

ClapTrap::ClapTrap(const ClapTrap &cp)
{
    *this = cp;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &ref)
{
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
        std::cout << "Hit points: " << hit_points << std::endl;
        std::cout << "Energy points: " << energy_points << std::endl;
        return;
    }

    std::cout << "ClapTrap " << name << " attacks " << target << ", causing "
              << attack_demage << " points of damage!" << std::endl;
    energy_points--;
}

void ClapTrap::takeDamage(unsigned int amount)
{
    std::cout << "ClapTrap attacks, then its target to lose " << amount
              << " hit points!" << std::endl;
    hit_points -= amount;
}

void ClapTrap::beRepaired(unsigned int amount)
{
    std::cout << "ClapTrap repairs itself, then it gets " << amount
              << " hit points back!" << std::endl;
              
    hit_points += amount;
    energy_points--;
}

ClapTrap::~ClapTrap() 
{
    std::cout << name << "Destructor !!!" << std::endl;
}