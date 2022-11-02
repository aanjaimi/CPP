#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() : Form("", "PresidentialPardonForm", 25, 5)
{
    std::cout << "PresidentialPardonForm : Default constructor called\n";
}

PresidentialPardonForm::PresidentialPardonForm(std::string const &target) : Form(target, "PresidentialPardonForm", 25, 5)
{
    std::cout << "PresidentialPardonForm : Params constructor called\n";
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &f) : Form(f.getTarget(), f.getName(), f.getGradeSigned(), f.getGradeExecute())
{
    std::cout << "PresidentialPardonForm : Copy constructor called" << std::endl;
    *this = f;
}

PresidentialPardonForm &PresidentialPardonForm::operator = (const PresidentialPardonForm &p)
{
    std::cout << "PresidentialPardonForm : Copy assignment operator called" << std::endl;
    Form::operator=(p);
    return (*this);
}

PresidentialPardonForm::~PresidentialPardonForm()
{
    std::cout << "PresidentialPardonForm : Destructor called" << std::endl;
}

void        PresidentialPardonForm::action(Bureaucrat const & executor) const
{
    std::cout << getTarget() << " has been pardoned by " << executor.getName() <<"." << std::endl;
}