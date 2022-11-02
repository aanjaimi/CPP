#include "Form.hpp"

Form::Form() : Target(""), Name(""), Grade_s(150), Grade_e(150)
{
    std::cout << "Form Default constructor called\n";
    Signed = false;
}

Form::Form(std::string const &target, std::string const &name, const int grade_s, const int grade_e) : Target(target), Name(name), Grade_s(grade_s), Grade_e(grade_e)
{
    std::cout << "Form constructor with parameters called\n";
    if (grade_s <= 0 || grade_e <= 0)
        throw GradeTooHighException();
    if (grade_s > 150 || grade_e > 150)
        throw GradeTooLowException();
    Signed = false;
}

Form::Form(const Form &f) : Target(f.Target), Name(f.Name), Grade_s(f.Grade_s), Grade_e(f.Grade_e)
{
    std::cout << "Form Copy constructor called" << std::endl;
    *this = f;
}

Form &Form::operator = (const Form &f)
{
    std::cout << "Form Copy assignment operator called" << std::endl;
    if (this == &f)
        return (*this);
    if (f.getGradeSigned() <= 0 || f.getGradeSigned() <= 0)
        throw GradeTooHighException();
    if (f.getGradeExecute() > 150 || f.getGradeExecute() > 0)
        throw GradeTooLowException();
    Signed = f.getSigned();
    return (*this);
}
//geters
std::string     Form::getTarget() const
{
    return (Target);
}

std::string     Form::getName() const
{
    return (Name);
}

int             Form::getGradeSigned() const
{
    return (Grade_s);
}

int             Form::getGradeExecute() const
{
    return (Grade_e);
}

bool            Form::getSigned() const
{
    return (Signed);
}

void            Form::setSigned(bool signe)
{
    Signed = signe;
}

Form::~Form()
{
    std::cout << "Form Destructor called\n";
}

void                Form::beSigned(const Bureaucrat &b)
{
    if (b.getGrade() <= Grade_s)
        throw GradeTooLowException();
    Signed = true;
}

void Form::execute(Bureaucrat const & executor) const
{
    if (executor.getGrade() > Grade_e)
        throw (GradeTooLowException());
    if (this->getSigned() == false)
        throw (NotSignedForm());
    action(executor);
    std::cout << "Form : " << Name << " executed" << std::endl;
}

std::ostream &operator << (std::ostream& out, const Form& f)
{
    out << "-----------------Form--------------------" << std::endl;
    out << "Form name : " << f.getName() << std::endl;
    out << "Is signed : " << f.getSigned() << std::endl;
    out << "Grade to signed it : " << f.getGradeSigned() << std::endl;
    out << "Grade to execute it : " << f.getGradeExecute() << std::endl;
    out << "-----------------------------------------" << std::endl;
    return (out);
}
