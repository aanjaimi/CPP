#include "Contact.hpp"

void    Contact::Set_f(std::string f)
{
    _first_name = f;
}

void    Contact::Set_l(std::string l)
{
    _last_name = l;
}

void    Contact::Set_n(std::string n)
{
    _nickname = n;
}

void    Contact::Set_p(std::string p)
{
    _phone_number = p;
}

void    Contact::Set_d(std::string d)
{
    _darkest_secret = d;
}

std::string    Contact::Get_f()
{
    return (_first_name);
}

std::string    Contact::Get_l()
{
    return (_last_name);
}

std::string    Contact::Get_n()
{
    return (_nickname);
}

std::string    Contact::Get_p()
{
    return (_phone_number);
}

std::string    Contact::Get_d()
{
    return (_darkest_secret);
}
