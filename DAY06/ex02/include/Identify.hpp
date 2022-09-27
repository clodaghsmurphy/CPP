#ifndef IDENTIFY_HPP
# define IDENTIFY_HPP

# include <iostream>
# include <cstdlib>
 #include <unistd.h>
class Base {
    public:
    virtual ~Base(){};
};

class A : public Base {
    public:
    A() { std::cout << "🇦 : created A class" << std::endl;}
};

class B : public Base  {
public:
    B() { std::cout << "🅱️ : created B class" << std::endl;}
};

class C : public Base {
public:
    C() { std::cout << "🇨 : created C class" << std::endl;}
};

Base *generate(void);
void    identify(Base *p);
void    identify(Base &p);
#endif