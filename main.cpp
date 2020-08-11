#include "Array.hpp"
#include "Array.cpp"
#include <iostream>
#include <fstream>
#include <string>

int main() {
    
    Array<int>intArray{5}; 
    Array<double>doubleArray{5};
    Array<string>stringArray{3};
    
    ofstream theFile("Template.txt", ios::out);

cout<<"Please enter 5 integers to initialise integer array:"<<endl;
    theFile<<"Integer Array: "<<endl;
    for (size_t i=0; i<intArray.getSize(); i++) {
        int a;
        cin>>a;
        intArray.add(a);
        theFile<<a<<" ";
        
    }
    theFile<<endl;
    theFile<<endl;
    
    cout<<"Array after initialization: "<<endl;
    for (size_t i=0; i<intArray.getSize(); i++) {
        cout<<intArray.get(i)<<" ";
    
    }
    cout<<endl;
    cout<<endl;
    
    cout<<"Double array size: "<<doubleArray.getSize()<<endl;
        
     
        cout<<endl;


    cout<<"Please enter 5 doubles to initialise double array:"<<endl;
    theFile<<"Double Array: "<<endl;
        for (size_t i=0; i<intArray.getSize(); i++) {
            double a;
            cin>>a;
            doubleArray.add(a);
            theFile<<a<<" ";
        }
    theFile<<endl;
    theFile<<endl;
        cout<<"Array after initialization: "<<endl;
        for (size_t i=0; i<intArray.getSize(); i++) {
            cout<<doubleArray.get(i)<<" ";

        }
        cout<<endl;
        cout<<endl;
    
    cout<<"String array size: "<<stringArray.getSize()<<endl;
    

    cout<<"Please enter 3 strings to initialise string array:"<<endl;
    theFile<<"String Array: "<<endl;
        for (size_t i=0; i<stringArray.getSize(); i++) {
            string a;
            cin>>a;
            stringArray.add(a);
            theFile<<a<<" ";
        }
    theFile<<endl;
    theFile<<endl;
        
    cout<<"Array after initialization: "<<endl;
        for (size_t i=0; i<stringArray.getSize(); i++) {
            cout<<stringArray.get(i)<<" ";
        }
        cout<<endl;
        cout<<endl;
}
