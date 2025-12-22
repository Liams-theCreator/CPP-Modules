#include "Animal.hpp"

Animal::Animal()
{
    std::cout << "Animal Default Constructor called\n";
}

Animal::~Animal()
{
    std::cout << "Animal Destructor called\n";
}

Animal &Animal::operator=(const Animal &other)
{
    std::cout << "Animal Copy Assignment operator called"
}