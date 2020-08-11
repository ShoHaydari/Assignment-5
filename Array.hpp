#include <iostream>
#ifndef Array_hpp
#define Array_hpp
template <class T>
class Array{
  
public:
    Array(int=10);
    Array(const Array&);
    ~Array();
    size_t getSize()const;

    void add(const T&);
    
    T& get(size_t);
    
private:
    int elem;
    size_t size;
    T *ptr;
};


#endif /* Array_hpp */
