#include "PhoneBook.hpp"
#include "Contact.hpp"

int ft_atoi(std::string str)
{
	int	i;
	int	n;
	int	signe;

	i = 0;
	n = 0;
	signe = 1;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == ' ')
		i++;
	if (str[i] == '-')
	{
		signe *= -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		n = n * 10 + str[i++] - '0';
		if (n * signe > 2147483647 || n * signe < -2147483648)
			return (-1);
	}
	if (str[i] == '\0' && str[i - 1] == '-')
		return (-1);
	if (str[i] && (str[i] < '0' || str[i] > '9'))
		return (-1);
	return (n * signe);
}

int main(void)
{
    PhoneBook   phonebook;
    std::string command;
    std::string i;

    while (1)
    {
        std::cout << "Enter your command : ";
        std::getline(std::cin, command);
        if (!std::cin.good() || command == EXIT)
            break ;
        else if (command == ADD)
        {
            if (phonebook.add() == 0)
                break ;
        }
        else if (command == SEARCH)
        {
            if (phonebook.display() == 1)
            {
                std::cout << "Enter an index : ";
                std::getline(std::cin, i);
                if (!std::cin.good())
                    break ;
                phonebook.search(ft_atoi(i));
            }
        }
        else
            MSG_ERR();
    }
    return (0);
}