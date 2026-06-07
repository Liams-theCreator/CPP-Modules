#ifndef BUREAUCRAT_H
#define BUREAUCRAT_H

#include <iostream>
#include <string>
#include <exception>

class Bureaucrat 
{
    private:
        const std::string _name;
        unsigned int _grade;
    public:
        Bureaucrat();
        Bureaucrat(const std::string name, const unsigned int grade);
        Bureaucrat(const Bureaucrat &other);
        Bureaucrat& operator=(const Bureaucrat &other);
        ~Bureaucrat();

        const std::string getName();
        const unsigned int getGrade();

        void incGrade();
        void decGrade();
};

#endif