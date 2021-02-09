#pragma once
#include <iostream>

template<typename TN>
class MyArray
{
private:
    int m_length;
    TN *m_data;

public:
    MyArray()
    {
        m_length = 0;
        m_data = nullptr;
    }

    MyArray(int length)
    {
        m_data = new TN [length];
        m_length = length;
    }
    ~MyArray()
    {
        reset();
    }

    void reset()
    {
        delete[] m_data;
        m_data = nullptr;
        m_length = 0;
    }

    TN & operator[](int index)
    {
        return m_data[index];
    }

    int getLength()
    {
        return m_length;
    }

    void print()
    {
        for (int i = 0; i < m_length; ++i)
            std::cout << m_data[i] << " ";
        std::cout << std::endl;
    }
};