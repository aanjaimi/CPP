#pragma once

#include <iostream>
#include <cmath>

#define ERR -2147483649

// std::string  special[6] = {
//     "nan",
//     "nanf",
//     "inf",
//     "-inf",
//     "inff",
//     "-inff"
// };

class Convert
{
private:
    const std::string   str;
public:
    Convert();
    Convert(const std::string &s);
    Convert(const Convert &c);
    Convert &operator=(const Convert &c);
    ~Convert();
    char    to_char() const;
    int     to_int() const;
    float   to_float() const;
    double  to_double() const;
    class Impossible : public std::exception {
        public:
        const char * what () const throw(){
            return "Impossible";
        }
    };
    class NotDisplayable : public std::exception {
        public:
        const char * what () const throw(){
            return "Not Displayable";
        }
    };
};

std::ostream &operator << (std::ostream& out, const Convert& c);