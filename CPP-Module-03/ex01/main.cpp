#include "ScavTrap.hpp"

int main()
{
    std::cout << "\n--- Creating ScavTraps ---" << std::endl;
    ScavTrap scav("Scav");

    std::cout << "\n--- Testing ScavTrap attack ---" << std::endl;
    scav.attack("Player");

    std::cout << "\n--- Testing ScavTrap guardGate ---" << std::endl;
    scav.guardGate();

    return 0;
}