#include "Zombie.hpp"

int main(void)
{
    std::cout << "Stack example" << '\n';
    randomChump("Stack Zombie");

    std::cout << "Heap example" << '\n';
    Zombie *zaba = newZombie("Heap Zombie");
    zaba->announce();
    delete zaba;
    
    return 0;
}