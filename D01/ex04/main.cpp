#include <iostream>
#include <fstream>

int main(int ac, char **av)
{
    std::string     line;
    std::fstream    fs;
    std::string     s1;
    std::string     s2;
    size_t          index;

    if (ac != 4)
    {
        std::cerr << "The structure must be : <./executable> <filename> <string 1> <string 2>" << std::endl;
        return (0);
    }
    std::ifstream   file(av[1]);
    s1 = av[2];
    s2 = av[3];
    if (file.is_open())
    {
        while (getline(file, line))
        {
            index = line.find(s1);
            // std::cout << line << std::endl;
            if (index != std::string::npos)
            {
                for (int i = 0;i < s2.length();i++)
                {
                    
                }
            }
            
        }
    }
    else
        std::cout << "Unable to open file" <<std::endl;
}