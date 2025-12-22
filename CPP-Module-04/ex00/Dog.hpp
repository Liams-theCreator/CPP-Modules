#ifndef DOG_H
#define DOG_H

#include <iostream>
#include <string>

class Dog : public Animal
{
    public:
        Dog();
        Dog(std::string type);
        Dog(const Dog &other);
        Dog &operator=(const Dog &other);
        ~Dog();

        void makeSound() override;
};

#endif