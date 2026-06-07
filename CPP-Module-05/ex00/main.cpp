#include "Bureaucrat.hpp"

int main() 
{
    try {
        Bureaucrat a("Alice", 150);

        a.decrement(); // should throw (grade would go to 0)
    }
    catch (Bureaucrat::GradeTooHighException &smya)
    {
        std::cout << "Exception -> " << smya.what();
    }
    catch (Bureaucrat::GradeTooLowException &smya)
    {
        std::cout << "Exception -> " << smya.what();
    }
    return 0;
}