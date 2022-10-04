# include "MutantStack.hpp"
template<class T>
void PrintStack(T s)
{
    if (s.empty())
        return;
     
 
    int x = s.top();
    s.pop();
    PrintStack(s);
    std::cout << x << " ";
    s.push(x);
}

void list_test()
{
    std::cout << std::endl << std::endl << "\033[1m\033[32m/////////////////////////////////////////";
    std::cout << std::endl << "\033[1m\033[32m LIST TEST \033[0m\033[37m" ;
    std::cout << std::endl << "\033[1m\033[32m/////////////////////////////////////////" << std::endl;
    std::cout << std::endl;
    std::list<int> mstack;

    mstack.push_back(5);
    mstack.push_back(17);
    std::cout << "\033[1m\033[33mAfter push_back 5, 17 Mutant stack top is : \033[0m\033[37m";
    std::cout << mstack.back() << std::endl;
    mstack.pop_back();
    std::cout << "\033[1m\033[33mSize after first pop_back : \033[0m\033[37m";
    std::cout << mstack.size() << std::endl;
    std::cout << "\033[1m\033[34m... Push_backing numbers 3, 5, 737 and 0 ....\033[0m\033[37m" << std::endl;
    mstack.push_back(3);
    mstack.push_back(5);
    mstack.push_back(737);
    //[...]
    mstack.push_back(0);
    std::list<int>::iterator it = mstack.begin();
    std::list<int>::iterator ite = mstack.end();
    
    std::cout << "\033[1m\033[33mBefore increment iterator val : \033[0m\033[37m" << *it << std::endl;
    ++it;
    std::cout << "\033[1m\033[33mAfter increment iterator val : \033[0m\033[37m" << *it << std::endl;
    --it;
    std::cout << "\033[1m\033[35mPrinting Mutant Stack with iterator \033[0m\033[37m" << std::endl;
    while (it != ite)
    {
        std::cout << *it << " ";
        ++it;
    } 
}


int main()
{
    MutantStack<int> mstack;
    mstack.push(5);
    mstack.push(17);
    std::cout << "\033[1m\033[33mAfter push 5, 17 Mutant stack top is : \033[0m\033[37m";
    std::cout << mstack.top() << std::endl;
    mstack.pop();
    std::cout << "\033[1m\033[33mSize after first pop : \033[0m\033[37m";
    std::cout << mstack.size() << std::endl;
    std::cout << "\033[1m\033[34m... Pushing numbers 3, 5, 737 and 0 ....\033[0m\033[37m" << std::endl;
    mstack.push(3);
    mstack.push(5);
    mstack.push(737);
    //[...]
    mstack.push(0);
    MutantStack<int>::iterator it = mstack.begin();
    MutantStack<int>::iterator ite = mstack.end();
    
    std::cout << "\033[1m\033[33mBefore increment iterator val : \033[0m\033[37m" << *it << std::endl;
    ++it;
    std::cout << "\033[1m\033[33mAfter increment iterator val : \033[0m\033[37m" << *it << std::endl;
    --it;
    std::cout << "\033[1m\033[35mPrinting Mutant Stack with iterator \033[0m\033[37m" << std::endl;
    while (it != ite)
    {
        std::cout << *it << " ";
        ++it;
    }
    std::cout << std::endl << "\033[1m\033[34mPritning copy == of Mutantstack \033[0m\033[37m" << std::endl;
    MutantStack<int> stack_copy = mstack;
    PrintStack(stack_copy);
    std::cout << std::endl << "\033[1m\033[34mPritning copy of Mutantstack in stack form \033[0m\033[37m" << std::endl;
    std::stack<int> s(mstack);
    PrintStack(s);
    list_test();
    return (0);
}