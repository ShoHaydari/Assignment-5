#include "Array.hpp"
using namespace std;

template<typename T>
Array<T>::Array(int arraySize) :size{ (arraySize > 0 ? static_cast<size_t>(arraySize) : throw invalid_argument{"Array must be greater than 0"}) }, ptr{ new T[size]{} }
{/* empty body */}

template<typename T>
Array<T>::Array(const Array& arrayTocopy) {
    size = arrayTocopy.size;
    ptr = new T[size];

    for (size_t i = 0; i < size; i++) {
        ptr[i] = arrayTocopy.ptr[i];
    }
}

template<typename T>
Array<T>::~Array() {
    size = 0;
    delete[] ptr;
}

template<typename T>
size_t Array<T>::getSize() {
    return size;
}

template<typename T>
const Array<T>& Array<T>::operator=(const Array& right) {
    delete[] ptr;
    size = right.size;
    ptr = new T[right.size];

    for (size_t i = 0; i < size; i++) {
        ptr[i] = right.ptr[i];
    }
    return *this;
}

template<typename T>
bool Array<T>::operator==(const Array& right)const {
    if (size != right.size)
        return false;

    for (size_t i = 0; i < size; i++) {
        if (ptr[i] != right.ptr[i])
            return false;
    }
    return true;
}

template<typename T>
bool Array<T>::operator!=(const Array& right)const {
    return !(*this == right);
}

template<typename T>
T& Array<T>::operator[](size_t subscript) {
    if (subscript < 0 || subscript >= size)
        throw("subscript out of range\n");
    return ptr[subscript];
}

template<typename T>
istream& operator>>(istream& input, Array<T>& a) {
    for (size_t i = 0; i < a.size; i++) {
        input >> a.ptr[i];
    }
    return input;
}

template<typename T>
ostream& operator<< (ostream& output, const Array<T>& a) {
    for (size_t i = 0; i < a.size; i++) {
        output << a.ptr[i] << "\n";
    }
    return output;
}

