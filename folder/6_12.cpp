#include <iostream>

using namespace std;

int main()
{
    int length;

    cin >> length;

    int *array = new int[length](); // 뒤에 ()를 추가해서 값이 0으로 초기화됨, {}을 이용하면 다른 값으로 초기화 가능 ex){ 11, 22, 33, ....}

    array[0] = 1;
    array[1] = 2;

    for (int i = 0; i < length; ++i)
    {
        cout << (uintptr_t)&array[i] << endl;
        cout << array[i] << endl;
    }

    delete [] array;
}