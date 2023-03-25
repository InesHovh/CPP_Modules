#include "ScavTrap.hpp"
// #include "ClapTrap.hpp"

ScavTrap::ScavTrap()
{
    std::cout << "ScavTrap default constructor!!!" << std::endl;

    name = "ScavTrap";
    hit_points = 100;
    energy_points = 50;
    attack_demage = 20;
}

ScavTrap::ScavTrap(std::string _name) : ClapTrap(_name, 100, 50, 20)
{
    std::cout << "ScavTrap default constructor, name: " << name << "!!!" << std::endl;
}

void ScavTrap::attack(const std::string &target)
{
    if (hit_points <= 0 || energy_points <= 0)
    {
        std::cout << "ScavTrap: Don't have any hit point or energy point!!!" << std::endl;
        std::cout << "ScavTrap: Hit point: " << hit_points << std::endl;
        std::cout << "ScavTrap: Energy point: " << energy_points << std::endl;

        return;
    }
    std::cout << "ClapTrap " << name << " attacks " << target << ", causing " << attack_demage << " points of damage!" << std::endl;

    energy_points--;
}

void ScavTrap::guardGate()
{
    std::cout << "ScavTrap is now in Gate keeper mode." << std::endl;
}

ScavTrap::~ScavTrap()
{
    std::cout << "ScavTrap destructor!!!" << std::endl;
}