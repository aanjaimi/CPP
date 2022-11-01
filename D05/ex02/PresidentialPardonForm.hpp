#pragma once

#include "Form.hpp"

class PresidentialPardonForm : public Form
{
private:
    
public:
    PresidentialPardonForm();
    PresidentialPardonForm(std::string const &target);
    PresidentialPardonForm(Form const &p);
    PresidentialPardonForm &operator=(const PresidentialPardonForm &p);
    ~PresidentialPardonForm();
    void        action(Bureaucrat const & executor) const;
};
