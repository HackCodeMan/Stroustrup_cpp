// Byarne Stroustrup => Chapter 2 => Exercises > n11
// Bill Counter


#include <iostream>


int main(int argc, char const *argv[])
{
    using namespace std;
    int cent1, cent5, cent10, cent25, cent50;
    cout << "Enter count of bills (5 arguments (1,5,10,25,50 cent)): ";
    cin >> cent1 >> cent5 >> cent10 >> cent25 >> cent50;

    int sum = cent1 + (cent5 * 5) + (cent10 * 10) + (cent25 * 25) + (cent50 * 50);

    cout << "Sum = " << sum << endl;
    
    return 0;
}
