#ifndef EASYFIND_HPP
# define EASYFIND_HPP

# include <iostream>
# include <vector>
# include <exception>

template<class T>
void    easyfind(T &container, int n)
{
    for (T::iterator it = container.begin(); it != container.end(); it++)
    {
        if (*it == n)
            std::cout << "found" << std::endl;
    }
}

#endif