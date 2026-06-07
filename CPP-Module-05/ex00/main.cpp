#include "Bureaucrat.hpp"

int main() 
{
    try {
        Bureaucrat a("Alice", 150);

        a.decrement(); // should throw (grade would go to 0)
    }
    catch (std::exception &e)
    {
        std::cout << "Exception -> " << e.what();
    }
    return 0;
}