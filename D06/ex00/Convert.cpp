#include "Convert.hpp"

Convert::Convert() : str("")
{

}

Convert::Convert(const std::string &s) : str(s)
{

}

Convert::Convert(const Convert &c) : str(c.str)
{

}

Convert::~Convert()
{

}

char    Convert::to_char() const
{
    int     i;
    float   f;

    try
    {
        i = std::stoi(str);
        f = std::stof(str);
        if (i < 0 || i > 255 || f - i != 0)
            throw Impossible();
        if (!isprint(i))
            throw NotDisplayable();
    }
    catch(const std::exception& e)
    {
        if (i < 0 || i > 255 || f - i != 0)
            throw Impossible();
        if (!isprint(i))
            throw NotDisplayable();
    }
    return (static_cast<char>(i));
}

int     Convert::to_int() const
{
    int i;

    try
    {
        i = std::stoi(str);
        return (i);
    }
    catch(const std::exception& e)
    {
        throw Impossible();
    }
}

float     Convert::to_float() const
{
    float   f;
    
    try
    {
        f = std::stof(str);
        return (f);
    }
    catch(const std::exception& e)
    {
        throw Impossible();
    }
}

double     Convert::to_double() const
{
    double   d;

    try
    {
        d = std::stod(str);
        return (d);
    }
    catch(const std::exception& e)
    {
        throw Impossible();
    }
}

std::ostream &operator << (std::ostream& out, const Convert& c)
{
    out << "-----------------Convert--------------------" << std::endl;
    out << "char : ";
    try
    {
        char    chr = c.to_char();
        out << "'" << chr << "'" << "\n";
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    out << "int : ";
    try
    {
        out << c.to_int() << "\n";
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    out << "float : ";
    try
    {
        float f = c.to_float();
        if (std::isnan(f) && std::signbit(f))
            out << "-";
        out << f;
        if (f - (int)f == 0)
            std::cout << ".0";
        std::cout << "f\n";
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    out << "double : ";
    try
    {
        double d = c.to_double();
        if (std::isnan(d) && std::signbit(d))
            out << "-";
        out << d;
        if (d - (int)d == 0)
            std::cout << ".0";
        std::cout << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    out << "--------------------------------------------" << std::endl;
    return (out);
}