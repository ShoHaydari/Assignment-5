#include <iostream>
#include <iomanip>
#include <stdexcept>
#include "Array.hpp"

using namespace std;

template<class T>
Array<T>::Array(int arraySize) {
    (arraySize>0?static_cast<size_t>(arraySize): throw invalid_argument ("Array size must be bigger than 0"));
    {
    this->size=arraySize;}
    ptr=new int[size];
}

template <class T>
Array<T>::Array(const Array& arrayToCopy){
    
    this->size=arrayToCopy.size;
    ptr = new int [size];
    
    for(size_t i=0; i<size; i++){
        ptr[i]= arrayToCopy.ptr[i];
    }
}

template <class T>
Array<T>::~Array(){
    delete [] ptr;
}

template <class T>
size_t Array<T>::getSize()const{
    return size;
}

template <class T>
const T& Array<T>::operator=(const T& right){
    if (&right !=this){
        
        if (size != right.size) {
            delete []ptr;
            size=right.size;
            ptr= new int[size];
            
        }
        for (size_t i=0 ; i<size ; i++){
            ptr[i]=right.ptr[i];
            
        }
    }
    return *this;
}

template <class T>
bool Array<T>::operator==(const T& right) const{
    
    if (size !=right.size){
        return false;
    }
    
    for (size_t i=0; i<size; i++) {
        if (ptr[i]!=right.ptr[i]) {
            return false;
    }
    }
    return true;
}

template <class T>
int& Array<T>::operator[](int subscript){
    
    if (subscript<0 || subscript>=size) {
        throw out_of_range {"Subscript put of range"};
    }
    return ptr[subscript];
}

template <class T>
int Array<T>::operator[](int subscript) const{
    
    if (subscript<0 || subscript>=size) {
        throw out_of_range {"Subscript put of range"};
    }
    return ptr[subscript];
}

template <class T>
istream& operator>>(istream& input, T& a){
    for (size_t i=0; i<a.size; i++) {
        input>>a.ptr[i];
    }
    return input;
}

template <class T>
ostream& operator<<(ostream& output, const T& a){
    
    for (size_t i=0; i<a.size; i++) {
        output<<a.ptr[i];
    }
    
    output<<endl;
    return output;
    
}
