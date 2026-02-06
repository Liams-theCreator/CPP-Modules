#include "Bureaucrat.hpp"

int main() 
{
    try {
        Bureaucrat a("Alice", 2);
        std::cout << a << std::endl;

        a.increment();
        std::cout << "After increment: " << a << std::endl;

        a.increment(); // should throw (grade would go to 0)
    } catch (std::exception &e) {
        std::cout << "Exception: " << e.what() << std::endl;
    }

    try {
        Bureaucrat b("Bob", 151); // invalid
    } catch (std::exception &e) {
        std::cout << "Exception: " << e.what() << std::endl;
    }

    try {
        Bureaucrat c("Charlie", 150);
        std::cout << c << std::endl;

        c.decrement(); // should throw
    } catch (std::exception &e) {
        std::cout << "Exception: " << e.what() << std::endl;
    }

    return 0;
}