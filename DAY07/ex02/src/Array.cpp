# include "Array.hpp"

template <class T>
Array<T>::Array()
{
    a = 0;
}

template <class T>
Array<T>::Array(unsigned int)
{
    
}

template <class T>
unsigned int    Array<T>::size()
{
    return (sizeof(a) / sizeof(T));
}

template <class T>
std::ostream& operator<<(std::ostream& os, const Array<T>& arr)
{
    for (int i = 0; i < arr.size(); i++)
    {
        os << arr[i] << " ";
    }
    os << std::endl;
    return os;
}