#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter() {}

ScalarConverter::ScalarConverter(const ScalarConverter &obj)
{
    (void)obj;
}

ScalarConverter& ScalarConverter::operator=(const ScalarConverter &obj)
{
    (void)obj;
    return *this;
}

ScalarConverter::~ScalarConverter() {}

int getType(const std::string &param)
{
    //
}

printChar(val)
{
    //
}

printInt(val)
{
    //
}

printFloat(val)
{
    //
}

printDouble(val)
{
    //
}

static void converter(const std::string &param)
{
    // parse
    int type = getType(param);

    if (type == INVALID)
        std::cout << "Invalid argument" << std::endl;

    // convert to double
    double val = 0.0;
    if (type == CHAR)
        val = static_cast<double>(param[0]);
    else if (type == INT)
        val = static_cast<double>();
    else if (type == FLOAT)
        val = static_cast<double>();
    else if (type == DOUBLE)
        val = // ;
    // cast & print output

    printChar(val);
    printInt(val);
    printFloat(val);
    printDouble(val);
}