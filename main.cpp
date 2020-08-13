#include <iostream>
#include "Array.hpp"
#include <fstream>
#include "Array.cpp"
#include <string>

using namespace std;

int main(){


    Array<int>intArray{ 5 };
    Array<double>doubleArray{ 5 };
    Array<string>stringArray{ 3 };

    ofstream myfile("Templates.txt", ios::out); //Templates.txt will store the values inputed in a .txt file

    //Testing  [], ==, <<, and >>
    cout << "Testing [], ==, <<, and >> " << endl;
    cout << "Enter elements in Int array\n";
    myfile << "Testing [], ==, <<, and >> " << endl;
   myfile << "Int Array Inputs" << endl;
    for (size_t i = 0; i < 5; i++) {
        cin >> intArray[i];
        myfile << intArray[i]<<" " ;
        if (i + 1 == intArray.getSize()){
            cout << "\nYour Int Array" << endl;
            cout << intArray ;
        }
            
    }
    myfile<<endl;

    
    cout << "\nEnter elements in Double Array" << endl;
    myfile << "Double Array Inputs" << endl;
    for (size_t i = 0; i < 5; i++) {
        cin >> doubleArray[i];
        myfile << doubleArray[i]<<" ";
        if (i + 1 == doubleArray.getSize()){
            cout << "\nYour Double Array" << endl;
            cout << doubleArray ;
        }
            
    }
    myfile<<endl;
    
    cout << "\n\nEnter elements in string array\n";
   myfile << "String Array Inputs" << endl;
    for (size_t i = 0; i < 3; i++) {
        cin >> stringArray[i];
        myfile << stringArray[i] <<" ";
        if (i + 1 == stringArray.getSize()){
            cout << "\nYour String Array" << endl;
            cout << stringArray ;
        }
            
    }


    myfile<<endl;
    myfile<<endl;
    

    Array<double>copiedarray{ doubleArray };
    cout << "Testing copy constructor and !=" << endl;
    myfile<< "Testing copy constructor and !=" << endl;
    for (size_t i = 0; i < copiedarray.getSize(); i++) {
        cout << copiedarray[i] << endl;
        myfile << copiedarray[i] << " ";
    }

    if (copiedarray == doubleArray) {
        cout << "\nthe Double Array was succesfully copied" << endl;
        myfile << "\nthe Double Array was succesfully copied" << endl;
    }

    for(size_t i = 0; i < copiedarray.getSize(); i++){
        if (copiedarray[i] != intArray[i]) {
            cout << "the copied array element in position " << i << " is not the same as in the int array" << endl;
        myfile << "the copied array element in position " << i << " is not the same as in the int array" << endl;
        }
        else{
            cout << "the copied array element in position " << i << " is the same as the int array" << endl;
            myfile << "the copied array element in position " << i << " is the same as in the int array" << endl;
        }
    }
    cout<<endl;
    
    cout<<"Reading from txt file:"<<endl;
    cout<<endl;
    string line;
    ifstream theFile("Templates.txt", ios::in);
  
    if (theFile.is_open()) {
        while (getline(theFile,line)) {
            cout<<line<<endl;
        }
        theFile.close();
    }
    return 0;
}
