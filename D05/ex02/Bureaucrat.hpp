#pragma once

#include <iostream>
#include "Form.hpp"
class Form;

class Bureaucrat
{
private:
    const std::string   Name;
    int                 Grade;
public:
    class GradeTooHighException : public std::exception {
        public:
        virtual const char * what () const throw(){
            return "Too High Grade";
        }
    };

    class GradeTooLowException : public std::exception {
        public:
        virtual const char * what () const throw(){
            return "Too Low Grade";
        }
    };
    Bureaucrat();
    Bureaucrat(std::string const &name, int grade);
    Bureaucrat(const Bureaucrat &b);
    Bureaucrat &operator=(const Bureaucrat &b);
    ~Bureaucrat();
    void                setName(const std::string n);
    void                setGrade(int g);
    const std::string   getName() const;
    int                 getGrade() const;
    void                increment();
    void                decrement();
    void                signForm(Form &f);
    void                executeForm(Form const &f);
};

std::ostream &operator<<(std::ostream& out, const Bureaucrat& b);