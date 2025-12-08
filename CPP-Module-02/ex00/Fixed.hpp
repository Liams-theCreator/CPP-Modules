#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <string>

class Fixed
{
    private:
        int fpoint_value;
        static const int fbits;
    public:
        Fixed(int fpoint_value);
        ~Fixed();

        int getRawBits(void) const;
        void setRawBits(int const raw);
};

#endif