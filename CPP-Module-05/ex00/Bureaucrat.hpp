#ifndef BUREAUCRAT_H
#define BUREAUCRAT_H

#include <iostream>
#include <string>

class Bureaucrat 
{
    private:
        const std::string _name;
        unsigned int _grade;
    public:
        Bureaucrat();
        Bureaucrat(const Bureaucrat &other);
        Bureaucrat& operator=(const Bureaucrat &other);
        ~Bureaucrat();

        std::string getName();
        unsigned int getGrade();

        void incGrade();
        void decGrade();
}

#endif