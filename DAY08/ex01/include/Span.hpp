#ifndef SPAN_HPP
# define SPAN_HPP

# include <vector>
# include <iostream>
# include <cstdlib>
# include <algorithm>
# include <iterator>
# include <numeric>
# include <limits>

class Span{
    public:
        /*********CANONICAL*************/
        Span();
        Span(unsigned int);
        ~Span();
        Span &operator=(const Span &rhs);
        Span(const Span &obj);
        /*********MEMBERFUNCS***********/
        void                 addNumber(int n);
        void                 addRange(std::vector<int>::iterator begin, std::vector<int>::iterator end);
        int                  shortestSpan();
        int                  longestSpan();
        void                 printVec();
        std::vector<int>     getVec();
        /********EXCEPTIONS*************/
        class full : public std::exception
        {
            public:
                virtual const char * what() const throw()
                {
                    return "\033[1m\033[31m❌ Span storage full ❌";
                }
        };
        class VecTooSmall : public std::exception
        {
            public:
                virtual const char * what() const throw()
                {
                    return "\033[1m\033[31m❌ Vector too small to find span ❌";
                }
        };
        class OutofBounds : public std::exception
        {
            public:
                virtual const char * what() const throw()
                {
                    return "\033[1m\033[31m❌ Range out of bounds ❌";
                }
        };
    private:
        /*********ATTIRBUTES************/
        std::vector<int> vec;
        unsigned int    stored;
        unsigned int    max;
};



# endif