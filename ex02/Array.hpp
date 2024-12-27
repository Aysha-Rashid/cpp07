#pragma once
#include "iostream"

template <class T>
class Array
{
    private:
        size_t _size;
    public:
        Array(){};
        Array(unsigned int n)
        {
            for (int i = 0; i < n; i++)
                Array T[i] = new Array();
            _size = n;
        };
        Array(Array &copy) : _size(nullptr)
        {
            (void)copy;
            std::cout << "Copy Constructor called" << std::endl;
        };
        Array operator=(Array &copy)
        {
            std::cout << "Copy Assignment Constructor called" << std::endl;
            this->_size = copy->_size;
            return (*this);
        };
        Array operator[](Array &copy);
        size_t size(void)
        {
            return _size;
        };
};