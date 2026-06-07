#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() {}
Bureaucrat::Bureaucrat(const Bureaucrat &other): _name(other._name), _grade(other._grade) {}
Bureaucrat::Bureaucrat(const std::string name, const unsigned int grade): _name(name), _grade(grade) {}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat &other)
{
    if (this != &other)
    {
        _name = other._name;
        _grade = other._grade;
    }
    return *this;
}

Bureaucrat::~Bureaucrat() {};

const std::string Bureaucrat::getName()
{
    return _name;
}
const unsigned int Bureaucrat::getGrade()
{
    return _grade;
}

void incGrade()
{
    _grade++;
};

void decGrade()
{
    _grade--;
};