#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"


int main(void)
{
    {
        Bureaucrat _bureaucrat("lprof", 115);
        ShrubberyCreationForm _shrubbery("home");
        _bureaucrat.executeForm(_shrubbery);
        _bureaucrat.signForm(_shrubbery);
        _bureaucrat.executeForm(_shrubbery);
    }
    std::cout << "--------------------------------\n";
    {
        Bureaucrat _bureaucrat("president", 10);
        PresidentialPardonForm _autoRoute("autoroute");
        _bureaucrat.signForm(_autoRoute);
        _bureaucrat.executeForm(_autoRoute);
    }
    std::cout << "--------------------------------\n";
    {
        Bureaucrat _bureaucrat("robotomy", 1);
        RobotomyRequestForm _robot("randomForm");
        _bureaucrat.signForm(_robot);
        _bureaucrat.executeForm(_robot);
    }
}