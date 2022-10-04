#ifndef EASYFIND_HPP
# define EASYFIND_HPP

# include <iostream>
# include <vector>
# include <deque>
# include <list>
# include <exception>

template<class T>
void    easyfind(T &container, int n)
{
    for (typename T::iterator it = container.begin(); it != container.end(); it++)
    {
        if (*it == n)
        {
            std::cout << " ✅ INT FOUND ✅" << std::endl;
            return ;
        }
    }
    std::cout << " ❌ INT NOT FOUND ❌" << std::endl;
}

template<class T>
void print(T &container)
{
    for (typename T::iterator it = container.begin(); it != container.end(); it++)
    {
        std::cout << *it << " ";
    }
    std::cout << std::endl;

}

#endif