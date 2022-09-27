#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <iostream>

template <class T>
class Array {
    private:
    T *a[];
    public:
    Array<T>();
    Array<T>(unsigned int n);
    unsigned int size();
};

template <class T>
std::ostream& operator<<(std::ostream& os, const Array<T>& arr);

#endif