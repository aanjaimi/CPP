#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm() : Form("", "RobotomyRequestForm", 72, 45)
{
    
}

RobotomyRequestForm::RobotomyRequestForm(std::string const &target) : Form(target, "RobotomyRequestForm", 72, 45)
{
    
}

RobotomyRequestForm &RobotomyRequestForm::operator = (const RobotomyRequestForm &p)
{
    Form::operator=(p);
    return (*this);
}

RobotomyRequestForm::~RobotomyRequestForm()
{
    
}

void        RobotomyRequestForm::action(Bureaucrat const & executor) const
{
    execute(executor);
    for (int i = 0;i < 10;i++)
    {
        if (i % 2 == 0)
            std::cout << getTarget() << " has been robotomized successfully!" << std::endl;
        else
            std::cout << "The robotomy of " << getTarget() << "failed!" << std::endl;
    }
}