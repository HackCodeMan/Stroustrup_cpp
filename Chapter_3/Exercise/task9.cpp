// Byarne Stroustrup => Chapter 2 => Exercises > n9
// converting from strind num to int

#include <iostream>

int main(int argc, char const *argv[])
{
    using namespace std;

    string str_num;
    cout << "Enter 'zero' or 'one' or 'two' or 'three' or 'four' or 'five': ";
    cin >> str_num;

    cout << "Your number: ";
    
    if (str_num == "zero") cout << 0;
    else if (str_num == "one") cout << 1;
    else if (str_num == "two") cout << 2;
    else if (str_num == "three") cout << 3;
    else if (str_num == "four") cout << 4;
    else if (str_num == "five") cout << 5;
    else {
        cerr << "error: I don't know that number\n";
        exit(1);

    };
    cout << endl;
    return 0;
}
