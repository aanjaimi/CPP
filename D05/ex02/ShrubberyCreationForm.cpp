#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() : Form("", "ShrubberyCreationForm", 145, 137)
{
    
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string const &target) : Form(target, "ShrubberyCreationForm", 145, 137)
{
    
}

ShrubberyCreationForm &ShrubberyCreationForm::operator = (const ShrubberyCreationForm &p)
{
    Form::operator=(p);
    return (*this);
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
    
}

void        ShrubberyCreationForm::action(Bureaucrat const & executor) const
{
    Form::execute(executor);
    std::ofstream   file(getTarget() + "_shrubbery");
    if (file.is_open())
        file << TREE_ASCII_ART;
}
