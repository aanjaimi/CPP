#pragma once

#include "Form.hpp"

class PresidentialPardonForm : public Form
{
private:
    
public:
    PresidentialPardonForm();
    PresidentialPardonForm(std::string const &target);
    PresidentialPardonForm(PresidentialPardonForm const &f);
    PresidentialPardonForm &operator=(const PresidentialPardonForm &p);
    ~PresidentialPardonForm();
    void        action(Bureaucrat const & executor) const;
};
