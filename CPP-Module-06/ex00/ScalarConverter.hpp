#ifndef SCALARCONVERTER_HPP
#define SCALARCONVERTER_HPP

#include <iostream>
#include <string>
#include <cctype>
#include <limits>

#define CHAR 0
#define INT 1
#define FLOAT 2
#define DOUBLE 3
#define INVALID -1

class ScalarConverter
{
    private:
        ScalarConverter();
        ScalarConverter(const ScalarConverter &obj);
        ScalarConverter& operator=(const ScalarConverter &obj);
        ~ScalarConverter();
    public:
        static void converter(const std::string &param);
};


#endif