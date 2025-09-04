#include <iostream>

int main(int ac, char **av)
{
    int i, j;

    if (ac == 1)
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *\n";
    else
    {
        j = 1;
        while (j < ac)
        {
            i = 0;
            while (av[j][i])
            {
                if (av[j][i] >= 'a' && av[j][i] <= 'z')
                {
                    av[j][i] -=  32;
                }
                i++;
            }
            j++;
        }
        int i = 1;
        while (i < ac)
            std::cout << av[i++];
        std::cout << std::endl ;
    }
    return 0;
}