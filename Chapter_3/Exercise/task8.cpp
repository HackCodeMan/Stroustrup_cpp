// Byarne Stroustrup => Chapter 2 => Exercises > n8
// Enter the number and I define, is your number odd or even

#include <iostream>

int main(int argc, char const *argv[])
{
    using namespace std;

    int number;
    cout << "Enter the number and I define, is your number odd or even.\nYour number: ";
    cin >> number;

    cout << "Your number is ";
    if (number % 2 == 0) cout << "even\n";
    else cout << "odd\n";

    return 0;
}
