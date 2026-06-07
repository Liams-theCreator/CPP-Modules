#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() {}
Bureaucrat::Bureaucrat(const Bureaucrat &other) 
{
    *this = other;
}
Bureaucrat& Bureaucrat::operator=(const Bureaucrat &other)
{
    if (this != &other)
        *this = other;
    return *this;
}
Bureaucrat::~Bureaucrat() {}

std::string Bureaucrat::getName()
{
    return _name;
}
unsigned int Bureaucrat::getGrade()
{
    return _grade;
}

void incGrade()
{
    _grade++;
}

void decGrade()
{
    _grade--;
}