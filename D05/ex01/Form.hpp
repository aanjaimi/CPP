#pragma once

#include "Bureaucrat.hpp"
class Bureaucrat;
class Form
{
private:
    const std::string   Name;
    const int           Grade_s;
    const int           Grade_e;
    bool                Signed;
public:
    class GradeTooHighException : public std::exception {
        public:
        virtual const char * what () const throw(){
            return "Too High Grade";
        }
    };

    class GradeTooLowException : public std::exception {
        public:
        virtual const char * what () const throw(){
            return "Too Low Grade";
        }
    };
    Form();
    Form(std::string const &name, const int grade_s, const int grade_e);
    Form(const Form &b);
    Form &operator=(const Form &b);
    ~Form();
    const std::string   getName() const;
    int                 getGradeSigned() const;
    int                 getGradeExecute() const;
    bool                getSigned() const;
    void                setName(const std::string name) const;
    void                setGradeSigned(const int grade_s) const;
    void                setGradeExecute(const int grade_e) const;
    void                setSigned(bool signe);
    void                beSigned(const Bureaucrat &b);
};

std::ostream &operator<<(std::ostream& out, const Form& b);