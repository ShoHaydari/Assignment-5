#include "Array.cpp"
#include "Array.hpp"
#include <iostream>
#include <stdexcept>
using namespace std;

int main() {
   
    Array<int>intArray(5);
   
    cout<<"Size of array is: "<<intArray.getSize()<<"\nArray after initializtion: "<<intArray;
    //at this point is doesn't let me use cout<<
}
