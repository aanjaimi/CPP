#pragma once
#include <iostream>
#include <string.h>

class Contact
{
private:
    std::string _first_name;
    std::string _last_name;
    std::string _nickname;
    std::string _phone_number;
    std::string _darkest_secret;
public:
    void           Set_f(std::string f);
    void           Set_l(std::string l);
    void           Set_n(std::string n);
    void           Set_p(std::string p);
    void           Set_d(std::string d);
    std::string    Get_f();
    std::string    Get_l();
    std::string    Get_n();
    std::string    Get_p();
    std::string    Get_d();
};
