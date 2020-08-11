
#include "Array.hpp"
#include <iostream>
using namespace std;
template <class T>
Array<T>::Array(int arraySize){
    if (arraySize>0) {
        size=static_cast<size_t>(arraySize);
        ptr=new T[size];
        for (size_t i=0; i<size; i++) {
        }

    }
    else
    throw invalid_argument("Array size must be bigger that 0");
    
}

template <class T>
Array<T>::Array(const Array& a){ 
    
    size=a.size;
    ptr=new T[size];
    
    for (size_t i=0; i<0; i++) {
        ptr[i]=a.ptr[i];
    }
}

template <class T>
Array<T>::~Array(){
    delete [] ptr;
}

template <class T>
void Array<T>::add(const T &obj){
    if (elem<size) {
        ptr[elem++]=obj;
    }
    
    else
        cout<<"Array is full"<<endl;
}

template <class T>
T& Array<T>::get(size_t i){
    if (i<0 || i>=size) {
        throw "Out of range";
    }
    
    else
        return ptr[i];
}

template <class T>
size_t Array<T>::getSize()const{
    return size;
}

