
#pragma once
#include <iostream>
#include <string>

#ifndef ARRAY_H
#define ARRAY_H


template<typename T> class Array;
template<typename T> std::istream& operator>>(std::istream& input, Array<T>& a);
template <typename T> std::ostream& operator<<(std::ostream& output, const Array<T>& a);
template<typename T>
class Array
{
    friend std::istream& operator>> <>(std::istream& input, Array<T>& a);
    friend std::ostream& operator<< <>(std::ostream& output, const Array<T>& a);
 
public:
    Array(int arraySize);
    Array(const Array& arrayTocopy);
    ~Array();
    size_t getSize();
    const Array& operator=(const Array& right);
    bool operator==(const Array& right)const;
    bool operator!=(const Array& right)const;
    T& operator[](size_t subscript);

   

private:
    size_t size;
    T* ptr;
};
#endif
