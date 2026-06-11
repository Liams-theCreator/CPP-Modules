#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
#include "Array.hpp"

#define MAX_VAL 750

int main(void)
{
    Array<int> empty;
    std::cout << "Empty array size: " << empty.size() << std::endl;

    Array<int> numbers(MAX_VAL);
    int *mirror = new int[MAX_VAL];

    std::srand(std::time(0));
    for (int i = 0; i < MAX_VAL; i++)
    {
        int const value = std::rand();
        numbers[i] = value;
        mirror[i] = value;
    }

    {
        Array<int> tmp = numbers;
        Array<int> test(tmp);
    }

    for (int i = 0; i < MAX_VAL; i++)
    {
        if (mirror[i] != numbers[i])
        {
            std::cerr << "Error: values differ!" << std::endl;
            delete[] mirror;
            return 1;
        }
    }

    try
    {
        numbers[-2] = 0;
    }
    catch (std::exception const &e)
    {
        std::cerr << "Exception caught (negative index): " << e.what() << std::endl;
    }

    try
    {
        numbers[MAX_VAL] = 0;
    }
    catch (std::exception const &e)
    {
        std::cerr << "Exception caught (out of bounds): " << e.what() << std::endl;
    }

    for (int i = 0; i < MAX_VAL; i++)
        numbers[i] = i;

    Array<int> copied(numbers);
    for (int i = 0; i < MAX_VAL; i++)
        numbers[i] = 0;

    bool deep = true;
    for (int i = 0; i < 10 && i < MAX_VAL; i++)
    {
        if (copied[i] != i)
            deep = false;
    }
    std::cout << "Deep copy test: " << (deep ? "PASS" : "FAIL") << std::endl;

    delete[] mirror;

    Array<std::string> strings(3);
    strings[0] = "hello";
    strings[1] = "world";
    strings[2] = "template";
    for (unsigned int i = 0; i < strings.size(); i++)
        std::cout << strings[i] << std::endl;

    Array<std::string> copyStr(strings);
    strings[0] = "modified";
    std::cout << "Original[0]: " << strings[0] << std::endl;
    std::cout << "Copy[0]: " << copyStr[0] << std::endl;

    return 0;
}
