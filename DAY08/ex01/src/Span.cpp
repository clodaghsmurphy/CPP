# include "Span.hpp"

/************CANONOCIAL******************/
Span::Span() : stored(0), max(0)
{
    return ;
}

Span::Span(unsigned int N) : stored(0), max(N)
{
    return ;
}

Span::~Span()
{
    return ;
}

Span::Span(const Span &obj)
{
    *this = obj;
}

Span &Span::operator=(const Span &rhs)
{
    this->vec = rhs.vec;
    this->stored = rhs.stored;
    this->max = rhs.max;
    return *this;
}

/************MEMBER FUNCTIONS******************/
void    Span::addNumber(int i)
{
    if (stored >= max)
        throw full();
    vec.push_back(i);
    stored++;
}


void    Span::addRange(std::vector<int>::iterator begin, std::vector<int>::iterator end)
{
    unsigned int dist;

    dist = distance(begin, end);
    if (dist > max)
        throw OutofBounds();
    vec.insert(vec.begin(), begin, end);

}
bool ismore(int i, int j)
{
    return (i < j);
}
int Span::shortestSpan()
{
    int res = std::numeric_limits<int>::max();
    std::vector<int> vec2;
    std::vector<int> vec3;

    if (vec.size() == 0 || vec.size() == 1)
        throw VecTooSmall();
    std::copy(vec.begin(), vec.end(), back_inserter(vec2));
    std::sort(vec2.begin(), vec2.end());
    std::adjacent_difference(vec2.begin(), vec2.end(), std::back_inserter(vec3));
    res = *(std::min_element(vec3.begin(), vec3.end()));
    return (res);
}

int Span::longestSpan()
{
    int res= 0;
    std::vector<int>::iterator begin;

    if (vec.size() == 0 || vec.size() == 1)
        throw VecTooSmall();
    begin = vec.begin();
    res =  *(std::max_element(begin, vec.end())) - *(std::min_element(begin, vec.end()));
    return res;
    
}
void    Span::printVec()
{
    std::cout << "\033[1m\033[32mVECTOR : [";
    std::vector<int>::iterator it = vec.begin();
    while (it != vec.end())
        {
            std::cout << *it;
            it++;
            if (it != vec.end())
                std::cout << ", ";
        }
        std::cout << "]";
        std::cout << std::endl;
}

std::vector<int> Span::getVec()
{
    return this->vec;
}