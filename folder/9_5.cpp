#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Cents
{
private:
    int m_cents;

public:
    Cents(int cents = 0) { m_cents = cents; }
    int getCents() const { return m_cents; }
    int& getCents() { return m_cents; }

    // prefix
    Cents & operator ++ ()
    {
        ++m_cents;
        return *this;
    }

    // postfix
    Cents operator ++ (int)
    {
        Cents temp(m_cents);
        ++(*this);
        return temp;
    }

    friend std::ostream& operator << (std::ostream &out, const Cents &cents)
    {
        out << cents.m_cents;
        return out;
    }
};

int main()
{
    Cents d(9);

    cout << ++d << endl;
    cout << d << endl;

    cout << d++ << endl;
    cout << d << endl;

    return 0;
}