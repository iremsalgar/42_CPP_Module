#include <iostream>

int main(int ac, char **av)
{
    int i = 0;
    int j = -1;
    int a = 0;
    if(ac == 1)
        std::cout << "LOUD AND UNBEARABLE FEEDBACK NOISE" << std::endl;
    else
    {
        while (ac > 1 && av[++j] && av)
        {
            i = -1;
            while (j >= 1  && av[j][++i])
                std::cout << (char)std::toupper(av[j][i]);
            a++;
            if(a != ac && isalnum(av[j][i + 1]))
                std::cout << " ";
        }
        std::cout << std::endl;
    }
    return(0);
}