# include "MutantStack.hpp"

void PrintStack(MutantStack<int> s)
{
    if (s.empty())
        return;
     
 
    int x = s.top();
    s.pop();
    PrintStack(s);
    std::cout << x << " ";
    s.push(x);
}

void PrintStack_S(std::stack<int> s)
{
    if (s.empty())
        return;
     
 
    int x = s.top();
    s.pop();
    PrintStack_S(s);
    std::cout << x << " ";
    s.push(x);
}

void list_test()
{
    std::list<int> mstack;
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
    std::list::iterator it = mstack.begin();
    std::list::iterator ite = mstack.end();
    
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
    std::cout << std::endl << "\033[1m\033[34mPritning copy of Mutantstackin stack form \033[0m\033[37m" << std::endl;
    std::stack<int> s(mstack);
    PrintStack_S(s);
    list_test();
    return (0);
}