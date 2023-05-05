// Byarne Stroustrup => Chapter 2 => Exercises > n2
// This program converts millimeters to kilometers
#include <iostream>


int main(int argc, char const *argv[])
{
    using namespace std;

    double input_value; 
    cout << "Enter the your value in millimeters and I will convert it to kilometers\n\
Your value: ";
    cin >> input_value;

    cout << "Your value in kilometers: " << input_value * 1.609 << "km\n";
    
    return 0;
}
