#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm() : Form("", "RobotomyRequestForm", 72, 45)
{
    std::cout << "RobotomyRequestForm : Default Constructor called" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(std::string const &target) : Form(target, "RobotomyRequestForm", 72, 45)
{
    std::cout << "RobotomyRequestForm : Params Constructor called" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &f) : Form(f.getTarget(), f.getName(), f.getGradeSigned(), f.getGradeExecute())
{
    std::cout << "RobotomyRequestForm : Copy constructor called" << std::endl;
    *this = f;
}

RobotomyRequestForm &RobotomyRequestForm::operator = (const RobotomyRequestForm &p)
{
    std::cout << "RobotomyRequestForm : Copy assignment operator called" << std::endl;
    Form::operator=(p);
    return (*this);
}

RobotomyRequestForm::~RobotomyRequestForm()
{
    std::cout << "RobotomyRequestForm : Destructor called" << std::endl;
}

void        RobotomyRequestForm::action(Bureaucrat const & executor) const
{
    for (int i = 0;i < 10;i++)
    {
        if (i % 2 == 0)
            std::cout << executor.getName() << " has been robotomized successfully!" << std::endl;
        else
            std::cout << "The robotomy of " << executor.getName() << "failed!" << std::endl;
    }
}
