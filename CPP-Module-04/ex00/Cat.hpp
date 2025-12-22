#ifndef CAT_H
#define CAT_H

#include <iostream>
#include <string>

class Cat : public Animal
{
    public:
        Cat();
        Cat(std::string type);
        Cat(const Cat &other);
        Cat &operator=(const Cat &other);
        ~Cat();

        void makeSound() override;
};

#endif