#ifndef ITER_HPP
# define ITER_HPP

# include <iostream>
# include <iomanip>

template <class T>
void    iter(T a[], int n, void (*func)(T type))
{
    std::cout << "\033[0m\033[37m[ ";
    for (int i = 0; i < n; i++)
    {
        func(a[i]);
    }
    std::cout << "]\033[0m";
    std::cout << std::endl;
}

template<class  T>
void    print(T i)
{
    std::cout << std::fixed << std::setprecision(2) << i << ", ";
}
# endif