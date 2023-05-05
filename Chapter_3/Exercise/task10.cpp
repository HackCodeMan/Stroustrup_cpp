// Byarne Stroustrup => Chapter 2 => Exercises > n10
// Calculator

#include <iostream>


int main(int argc, char const *argv[])
{
    using namespace std;

    string operation;
    double num1, num2;

    cout << "Enter the math example(operation num1 num2): ";
    cin >> operation >> num1 >> num2;

    if ((operation == "+") || (operation == "plus")) cout << num1 + num2;
    else if ((operation == "-")||(operation == "minus")) cout << num1 - num2;
    else if ((operation == "*")||(operation == "mul")) cout << num1 * num2;
    else if ((operation == "/")||(operation == "div")) cout << num1 / num2;

    cout << endl;
    
    return 0;
}
