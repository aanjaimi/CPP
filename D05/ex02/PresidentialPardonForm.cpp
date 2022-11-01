#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() : Form("", "PresidentialPardonForm", 25, 5)
{
    
}

PresidentialPardonForm::PresidentialPardonForm(std::string const &target) : Form(target, "PresidentialPardonForm", 25, 5)
{
    
}

PresidentialPardonForm &PresidentialPardonForm::operator = (const PresidentialPardonForm &p)
{
    Form::operator=(p);
    return (*this);
}

PresidentialPardonForm::~PresidentialPardonForm()
{
    
}

void        PresidentialPardonForm::action(Bureaucrat const & executor) const
{
    execute(executor);
    std::cout << getTarget() << " has been pardoned by Zaphod Beeblebrox." << std::endl;
}