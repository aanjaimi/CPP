#pragma once

#include <iostream>
#include <exception>

template <typename T>
class Array
{
private:
    unsigned int    sz;
    T               *arr;
public:
    Array(void)
    {
        sz = 0;
        arr = NULL;
    };
    Array(unsigned int n)
    {
        sz = n;
        arr = new T[n];
    };
    Array(const Array &a)
    {
        T   *tmp;
        
        sz = a.size();
        arr = new T[sz];
        tmp = a.getArray();
        for (unsigned int i = 0;i < sz;i++)
        {
            try
            {
                arr[i] = tmp[i];
            }
            catch(const std::exception& e)
            {
                std::cerr << e.what() << '\n';
            }
        }
    };
    T const &operator =(const T &a)
    {
        if (this != &a)
        {
            T   *tmp;
            this->~Array();
            sz = a.size();
            arr = new T[a.size()];
            tmp = a.getArray();
            for (unsigned int i = 0;i < sz;i++)
            {
                try
                {
                    arr[i] = tmp[i];
                }
                catch(const std::exception& e)
                {
                    std::cerr << e.what() << '\n';
                }
            }    
        }
    }
    T &operator [](unsigned int i)
    {
        if (i >= sz)
            throw (std::out_of_range("Index out of range"));
        return (arr[i]);
    }
    ~Array()
    {
        if (arr)
            delete[] arr;
    };
    unsigned int    size() const
    {
        return (sz);
    };
    T *getArray() const
    {
        return (arr);
    };
};