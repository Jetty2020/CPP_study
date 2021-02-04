#include <iostream> // cout, cin, endl, .....
#include <string>

using namespace std;

int main()
{
    cout << "Your age ? : ";
    int age;
    cin >> age;

    std::cin.ignore(32767, '\n'); // \n이 올 때까지 32767개의 글자를 무시해라

    cout << "Your name ? : ";
    string name;
    std::getline(std::cin, name);

    cout << name << " " << age << endl;

    return 0;
}