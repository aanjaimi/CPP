#include "PhoneBook.hpp"

PhoneBook::PhoneBook()
{
    index = 0;
    counter = 0;
}

PhoneBook::~PhoneBook()
{

}

int PhoneBook::read(int i)
{
    std::string f;
    std::string l;
    std::string n;
    std::string p;
    std::string d;

    if (i == 0)
    {
        I1:
        std::cout << FR_NAME;
        std::getline(std::cin, f);
        if (!std::cin.good())
            return (0);
        if (f.length() == 0)
        {
           std::cout << EMPTY << std::endl << RETRY << std::endl;
           goto I1;
        }
        contact[index].Set_f(f);
    }
    else if (i == 1)
    {
        I2:
        std::cout << LS_NAME;
        std::getline(std::cin, l);
        if (!std::cin.good())
            return (0);
        if (l.length() == 0)
        {
           std::cout << EMPTY << std::endl << RETRY << std::endl;
           goto I2;
        }
        contact[index].Set_l(l);
    }
    else if (i == 2)
    {
        I3:
        std::cout << NC_NAME;
        std::getline(std::cin, n);
        if (!std::cin.good())
            return (0);
        if (n.length() == 0)
        {
           std::cout << EMPTY << std::endl << RETRY << std::endl;
           goto I3;
        }
        contact[index].Set_n(n);
    }
    else if (i == 3)
    {
        I4:
        std::cout << PHONE_NUM;
        std::getline(std::cin, p);
        if (!std::cin.good())
            return (0);
        if (p.length() == 0)
        {
           std::cout << EMPTY << std::endl << RETRY << std::endl;
           goto I4;
        }
        contact[index].Set_p(p);
    }
    else if (i == 4)
    {
        I5:
        std::cout << DR_SECRET;
        std::getline(std::cin, d);
        if (!std::cin.good())
            return (0);
        if (d.length() == 0)
        {
           std::cout << EMPTY << std::endl << RETRY << std::endl;
           goto I5;
        }
        contact[index].Set_d(d);
    }
    return (1);
}

int PhoneBook::add()
{
    if (index % 8 == 0)
        index = 0;
    int i = 0;
    while (i < 5)
    {
        if (read(i) == 0)
            return (0);
        i++;
    }
    std::cout << "Contact added successfully" << std::endl;
    if (counter < 8)
        counter++;
    index++;
    return (1);
}

std::string str_wide(std::string str)
{
    if (str.length() >= 10)
    {
        str = str.substr(0, 9);
        str.append(1, '.');
    }
    return (str);
}

void    PhoneBook::search(int i)
{
    if (i >= counter || i < 0)
    {
        std::cout << "Index out of range!" << std::endl;
        return ;
    }
    std::cout << contact[i].Get_f() << std::endl;
    std::cout << contact[i].Get_l() << std::endl;
    std::cout << contact[i].Get_n() << std::endl;
    std::cout << contact[i].Get_p() << std::endl;
    std::cout << contact[i].Get_d() << std::endl;
    return ;
}

void    prt1()
{
    std::cout << std::setfill('-');
    for (int i = 0;i < 4;i++)
        std::cout << "+" << std::setw(10) << " ";
    std::cout << "+" << std::endl << std::setfill(' ');
}

int PhoneBook::display()
{
    if (counter == 0)
    {
        std::cout << "Empty phonebook!" << std::endl;
        return (0);
    }
    prt1();
    std::cout << "|" << std::setw(10) << "index";
    std::cout << "|" << std::setw(10) << "first name";
    std::cout << "|" << std::setw(10) << "last name";
    std::cout << "|" << std::setw(10) << "nickname" << "|" << std::endl;
    prt1();
    for (int i = 0;i < counter;i++)
    {
        std::cout << "|" << std::setw(10) << i;
        std::cout << "|" << std::setw(10) << str_wide(contact[i].Get_f());
        std::cout << "|" << std::setw(10) << str_wide(contact[i].Get_l());
        std::cout << "|" << std::setw(10) << str_wide(contact[i].Get_n()) << "|" << std::endl;
    }
    prt1();
    std::cout << std::endl;
    return (1);
}