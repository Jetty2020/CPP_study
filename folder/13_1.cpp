#include <iostream>

template<typename TN>
TN getMax(TN x, TN y)
{
    return (x > y) ? x : y;
}

int main()
{
    std::cout << getMax(1, 2) << std::endl;
    std::cout << getMax(3.14, 1.123) << std::endl;
    std::cout << getMax(1.0f, 2.123f) << std::endl;
    std::cout << getMax('c', 'q') << std::endl;
}