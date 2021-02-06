#include <iostream>
using namespace std;

class Cents
{
private:
    int m_cents;

public:
    Cents(int cents = 0) { m_cents = cents; }
    int getCents() const { return m_cents; }
    int& getCents() { return m_cents; }

    Cents operator + (const Cents &c2)
    {
        return Cents(this->m_cents + c2.m_cents);
    }
};

int main()
{
    Cents cents1(6);
    Cents cents2(8);

    cout << (cents1 + cents2 + Cents(10) + Cents(100)).getCents() << endl;

    return 0;
}