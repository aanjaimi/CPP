#include "Intern.hpp"

Intern::Intern()
{
    std::cout << "Intern Default constructor called\n";
}

Intern::Intern(const Intern &f)
{
    std::cout << "Intern Copy constructor called" << std::endl;
    (void) f;
}

Intern &Intern::operator = (const Intern &f)
{
    std::cout << "Intern Copy assignment operator called" << std::endl;
    (void) f;
    return (*this);
}

Intern::~Intern()
{
    std::cout << "Intern Destructor called\n";
}

Form    *Intern::makeForm(std::string const &n_form, std::string const &target)
{

    const std::string forms[3] = {
        "ShrubberyCreationForm",
        "RobotomyRequestForm",
        "PresidentialPardonForm"
    };

    int i = 0;
    while (i < 3 && n_form != forms[i])
        i++;
    switch (i)
    {
        case 0:
            return (new ShrubberyCreationForm(target));
        case 1:
            return (new RobotomyRequestForm(target));
        case 2:
            return (new PresidentialPardonForm(target));
        case 3:
            throw NotKnownForm();
    }
    return (NULL);
}