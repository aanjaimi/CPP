#pragma once
#include <iostream>
#include <iomanip>
#include <string>
#include "Contact.hpp"

#define ADD "ADD"
#define SEARCH "SEARCH"
#define EXIT "EXIT"
#define MSG_ERR() std::cout << "Wrong Command!!" << std::endl << "You can only use : (ADD, SEARCH, EXIT)" << std::endl;
#define FR_NAME "Enter your first name : "
#define LS_NAME "Enter your last name : "
#define NC_NAME "Enter your nickname : "
#define PHONE_NUM "Enter your phone number : "
#define DR_SECRET "Enter your darkest secret : "
#define EMPTY "Empty field!"
#define RETRY "Try again"

class PhoneBook
{
private:
    Contact contact[8];
    int     counter;
    int     index;
public:
    int     read(int i);
    int     add();
    int     display();
    void    search(int i);
    PhoneBook();
    ~PhoneBook();
};
