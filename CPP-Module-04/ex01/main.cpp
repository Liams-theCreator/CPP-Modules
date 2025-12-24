#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"


int main()
{
    const Animal* animals[6];
    int i = 0;

    animals[0] = new Dog();
    animals[1] = new Dog();
    animals[2] = new Dog();
    animals[3] = new Cat();
    animals[4] = new Cat();
    animals[5] = new Cat();

    for ( ; i < 6; i++)
    {
        animals[i]->makeSound();
    }
    i = 0;
    for ( ; i < 6; i++)
    {
        delete animals[i];
    }

    std::cout << "\n ---- Testing deep copy of Dog ----\n";
    Dog originalDog;
    originalDog.makeSound();
    Dog copiedDog = originalDog;
    copiedDog.makeSound();

    std::cout << "\n ---- Testing deep copy of Cat ----\n";
    Cat originalCat;
    originalCat.makeSound();
    Cat copiedCat;
    copiedCat = originalCat;
    copiedCat.makeSound();

    return 0;
}