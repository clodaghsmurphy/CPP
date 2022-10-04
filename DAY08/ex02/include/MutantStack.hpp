# ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

# include  <vector>
# include <stack>
# include <iostream>
# include <algorithm>
# include <deque>
# include <list>
# include <iterator>

template<class T, class Container = std::deque<T> >
class MutantStack : public std::stack<T,Container> {

    using std::stack<T, Container>::c;

    public:
    /*---------------Canonical--------------*/

    MutantStack(){};
    ~MutantStack(){};
    MutantStack(const MutantStack &mstack)
    {
        *this = mstack;
    }
    MutantStack &operator=(const MutantStack &rhs)
    {
        this->c = rhs.c;
        return *this;
    }
    /*---------------iterators--------------*/
    typedef typename Container::iterator iterator;

    iterator begin() { return c.begin();}
    iterator end() { return c.end();}

    iterator begin() const { return c.begin();}
    iterator end() const { return c.end();}


};

#endif