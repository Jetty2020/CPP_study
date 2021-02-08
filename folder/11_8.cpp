#include <iostream>
using namespace std;

class Base
{
protected:
    int m_i;

public:
    Base(int value)
        : m_i(value)
    {}

    void print()
    {
        cout << "I'm base. " << endl;
    }
};

class Derived : public Base
{
private:
    double m_d;

public:
    Derived(int value)
        : Base(value)
    {}

    using Base::m_i;

private:
    // 아래의 두가지 방법으로 부모의 함수를 못 쓰게 만들 수 있다
    // using Base::print;
    // void print() = delete;

};

int main()
{
    Base base(5);
    base.print();

    Derived derived(7);

    derived.m_i = 1024;
    derived.print();

    return 0;
}