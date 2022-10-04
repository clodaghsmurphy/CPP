#ifndef EASYFIND_HPP
# define EASYFIND_HPP

# include <iostream>
# include <vector>
# include <deque>
# include <list>
# include <exception>
# include <algorithm>

template<class T>
void    easyfind(T &container, int n)
{
    typename T::iterator it;

    it = find(container.begin(), container.end(), n);
    if (it !=  container.end())
    {
        std::cout << " ✅ [" << *it << "] INT FOUND ✅" << std::endl;
        return ;
    }
    std::cout << " ❌ ["<< n << "] INT NOT FOUND ❌" << std::endl;
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