//Demonstration the variants of stop input int and string value

#include <iostream>
void enter(){std::cout << "\n\n";}

int main(int argc, char const *argv[])
{
    using namespace std;
    
    int num;
    cout << "Enter the number: ";
    cin >> num;
    cout << "Your number is " << num;

    enter();

    string str;
    cout << "Enter the string: ";
    cin >> str;
    cout << "Your string is " << str << " ";

    return 0;
}
