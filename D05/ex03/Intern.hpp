#pragma once

#include "Form.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"

class Intern
{
private:
    
public:
    Intern();
    Intern(Intern const &i);
    Intern &operator=(const Intern &i);
    ~Intern();
    Form    *makeForm(std::string const &n_form, std::string const &target);
    class NotKnownForm : public std::exception {
        public:
        const char * what () const throw(){
            return "Form Not Known";
        }
    };
};

