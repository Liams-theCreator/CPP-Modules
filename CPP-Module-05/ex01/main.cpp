#include "Bureaucrat.hpp"

int main() 
{
    try {
        Bureaucrat a("Alice", 2);

        a.increment();
        std::cout << a;
    }
    catch (std::exception &e)
    {
        std::cout << "Exception -> " << e.what();
    }
    return 0;
}