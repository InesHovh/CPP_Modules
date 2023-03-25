#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include <iostream>
#include <string>

class ClapTrap
{
protected:
    std::string name;
    int hit_points;
    int energy_points;
    int attack_demage;
public:
    ClapTrap();
    ClapTrap(std::string _name);
    ClapTrap(const ClapTrap &cp);
    ClapTrap(std::string name, int h, int e, int d);
    ClapTrap &operator=(const ClapTrap &ref);

    void attack(const std::string& target);
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);

    ~ClapTrap();
};

#endif