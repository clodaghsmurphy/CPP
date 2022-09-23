# include "scalar.hpp"

int main(int ac, char **av)
{
    if (ac < 2 || !strlen(av[1]))
    {
        std::cout << "Please enter C++ literal";
        return (1);
    }
    std::string str = av[1];
    convert(str);

}