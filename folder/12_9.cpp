#include <iostream>
#include <vector>

class Base
{
public:
    virtual void print()
    {
        std::cout << "I'm base." << std::endl;
    }
};

class Derived : public Base
{
public:
    void print()
    {
        std::cout << "I'm derived." << std::endl;
    }
};

int main()
{
    Base b;
    Derived d;

    std::vector<std::reference_wrapper<Base> > my_vec;
    my_vec.push_back(b);
    my_vec.push_back(d);

    for (auto & ele : my_vec)
        ele.get().print();

    return 0;
}