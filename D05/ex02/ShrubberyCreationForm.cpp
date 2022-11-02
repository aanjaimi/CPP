#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() : Form("", "ShrubberyCreationForm", 145, 137)
{
    std::cout << "ShrubberyCreationForm : Default Constructor called" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string const &target) : Form(target, "ShrubberyCreationForm", 145, 137)
{
    std::cout << "ShrubberyCreationForm : Params Constructor called" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &f) : Form(f.getTarget(), f.getName(), f.getGradeSigned(), f.getGradeExecute())
{
    std::cout << "ShrubberyCreationForm : Copy constructor called" << std::endl;
    *this = f;
}

ShrubberyCreationForm &ShrubberyCreationForm::operator = (const ShrubberyCreationForm &p)
{
    std::cout << "ShrubberyCreationForm : Copy assignment operator called" << std::endl;
    Form::operator=(p);
    return (*this);
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
    std::cout << "ShrubberyCreationForm : Destructor called" << std::endl;
}

void        ShrubberyCreationForm::action(Bureaucrat const &executor) const
{
    std::ofstream   file(executor.getName() + "_shrubbery");
    if (file.is_open())
        file << TREE_ASCII_ART;
    else
        std::cout << "Can't open file!\n";
}

void ShrubberyCreationForm::execute(Bureaucrat const & executor) const
{
    if (executor.getGrade() > getGradeExecute())
        throw (GradeTooLowException());
    if (this->getSigned() == false)
        throw (NotSignedForm());
    action(executor);
    std::cout << "Form : " << getName() << " executed" << std::endl;
}