#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : Name("")
{
    std::cout << "Bureaucrat Default constructor called\n";
    Grade = 150;
}

Bureaucrat::Bureaucrat(std::string const &name, int grade) : Name(name)
{
    std::cout << "Bureaucrat constructor with parameters called\n";
    if (grade <= 0)
        throw GradeTooHighException();
    if (grade > 150)
        throw GradeTooLowException();
    this->setGrade(grade);
}

Bureaucrat::Bureaucrat(const Bureaucrat &b)
{
    std::cout << "Bureaucrat Copy constructor called" << std::endl;
    *this = b;
}

Bureaucrat &Bureaucrat::operator = (const Bureaucrat &b)
{
    std::cout << "Bureaucrat Copy assignment operator called" << std::endl;
    if (this == &b)
        return (*this);
    if (b.Grade <= 0)
        throw GradeTooHighException();
    if (b.Grade > 150)
        throw GradeTooLowException();
    this->setGrade(b.Grade);
    return (*this);
}

void    Bureaucrat::setGrade(int grade)
{
    Grade = grade;
}

const std::string     Bureaucrat::getName() const
{
    return (Name);
}

int             Bureaucrat::getGrade() const
{
    return (Grade);
}

void    Bureaucrat::decrement()
{
    if (Grade + 1 > 150)
        throw GradeTooLowException();
    Grade++;
}

void    Bureaucrat::increment()
{
    if (Grade - 1 <= 0)
        throw GradeTooHighException();
    Grade--;
}

Bureaucrat::~Bureaucrat()
{
    std::cout << "Bureaucrat Destructor called\n";
}

std::ostream &operator << (std::ostream& out, const Bureaucrat& b)
{
    out << b.getName() << ", bureaucrat grade is " << b.getGrade() << std::endl;
    return (out);
}