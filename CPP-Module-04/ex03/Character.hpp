#ifndef CHARACTER_H
#define CHARACTER_H

#include "ICharacter.hpp"
#include "AMateria.hpp"

class Character : public ICharacter
{
    private:
        std::string name;
        AMateria* inventory[4];

    public:
        Character(std::string const & name);
        Character(Character const & other);
        Character &operator=(Character const & other);
        ~Character();

        std::string const & getName() const override;
        void equip(AMateria* m) override;
        void unequip(int idx) override;
        void use(int idx, ICharacter& target) override;
};

#endif