#include <iostream>
#include <limits>
#include <algorithm>

using namespace std;

int main()
{
    int fibonacci[] = { 0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89 };

    int max_number = numeric_limits<int>::lowest();

    // for-each문
    for (int number : fibonacci)
        cout << number << " ";
    cout << endl;
    for (const auto &n : fibonacci)
        max_number = max(max_number, n);
    
    cout << max_number << endl;

    return 0;
}