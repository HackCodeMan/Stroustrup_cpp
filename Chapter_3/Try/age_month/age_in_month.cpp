//Programm "name and age". Demonstrates the use of the operator ">>"
#include "std_lib_facilities.h"


int main(){
    string name; 
    double age;
    cout << "Enter the your name and age: ";
    cin >> name >> age;
    age *= 12;
    cout << "Name: " << name << endl 
    << "Age: " << age << " Month" << endl;  
}