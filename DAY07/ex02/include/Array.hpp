#ifndef ARRAY_HPP
# define ARRAY_HPP

#define MAX_VAL 750

#include <cstdlib>
# include <iostream>
# include <exception>

template <class T>
class Array {
    private:
    unsigned int _size;
    T *a;
    public:
    Array<T>() : a(0), _size(0) {};
    Array<T>(unsigned int n) : _size(n) {
        a = new T[n];
    };
    ~Array<T>(){
        delete[] a;
    }
    Array<T>(const Array<T> &obj) :  _size(obj._size), a(0) {*this = obj;}
    unsigned int ft_size() const
    {
         return (_size);
    }
    Array<T>& operator=(const Array<T>& rhs)
    {
        if (_size > 0)
            delete[] a;
        a = new T[rhs._size];
        _size = rhs._size;
        for (unsigned int i = 0; i < _size; i++)
            this->a[i] = rhs.a[i];
        return *this;
    }
    T &operator[](int i) const
    {
        if (i < 0 || (static_cast<unsigned int>(i)) >= this->_size)
        {   
            if (i < 0)
                throw std::out_of_range ("TOO LOW : Array index out of bound");
            else 
                throw std::out_of_range ("TOO HIGH : Array index out of bound");
        }
        return a[i];
    }
    
    
};
template<typename T>
std::ostream& operator<<(std::ostream& os, const Array<T>& arr) ;

#endif