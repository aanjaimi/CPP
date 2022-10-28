#pragma once

#include <iostream>

class Brain
{
private:
    std::string ideas[100];
public:
    Brain();
    Brain(const Brain &b);
    Brain &operator = (const Brain &b);
    ~Brain();
    std::string getIdea(int index);
    void        setIdea(int index, std::string idea);
};
