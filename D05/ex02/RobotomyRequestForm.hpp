#pragma once

#include "Form.hpp"

class RobotomyRequestForm : public Form
{
private:
    
public:
    RobotomyRequestForm();
    RobotomyRequestForm(std::string const &target);
    RobotomyRequestForm(Form const &p);
    RobotomyRequestForm &operator=(const RobotomyRequestForm &p);
    ~RobotomyRequestForm();
    void        action(Bureaucrat const & executor) const;
};
