#include <iostream>
#ifndef Array_hpp
#define Array_hpp
template <class T>
class Array{
    friend std::ostream& operator<<(std::ostream&, const T&);
    friend std::istream& operator>>(std::istream&,T&);
public:
    explicit Array (int =10);
    Array(const Array&);
    ~Array();
    size_t getSize() const;
    
    const T& operator=(const T&);
    bool operator==(const T&) const;
    
    bool operator != (const T&) const;
    
    int& operator[] (int);
    
    int operator[](int) const;
    
    
    
    
private:
    size_t size;
    T *ptr;
    
};

#endif /* Array_hpp */
