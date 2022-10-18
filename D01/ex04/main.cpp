#include <iostream>
#include <fstream>

int main(int ac, char **av)
{
    int             i;
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
        std::string tmp = ".replace";
        std::ofstream filerep(av[1] + tmp);
        std::string a;
        std::string t;
        while (getline(file, line))
        {
            a = line;
            index = a.find(s1);
            i = 0;
            while (index != std::string::npos && s1 != s2)
            {
                t = a.substr(0, index) + s2;
                a = t + a.substr(index + s1.length(), line.length() - (index + s1.length()));
                index = a.find(s1);
            }
            filerep << a << std::endl;
        }
    }
    else
        std::cout << "Unable to open file" << std::endl;
}
