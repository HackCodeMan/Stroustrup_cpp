// Byarne Stroustrup => Chapter 2 => Exercises > n6
// Enter 3 numbers and I will sort and print their in konsole

#include <iostream>

int main()
{
    using namespace std;

    int a, b, c;
    cout << "Enter 3 numbers and I will sort and print their in konsole\nYour numbers sepurate by a space: ";
    cin >> a >> b >> c;
    
    int first, second, third;

        if ((a <= b) && (a <= c)){
        first = a;
    } else if (b <= a && b <= c){
        first = b;
    } else if ((c <= a) && (c <= b)){
        first = c;
    }

    if ((a >= b) && (a >= c)){
        third = a;
        if (first == b) second = c;
        else second = b;
    } else if (b >= a && b >= c){
        third = b;
        if (first == c) second = a;
        else second = c;
    } else if ((c >= a) && (c >= b)){
        third = c;
        if (first == a) second = b;
        else second = a;
    }

    cout << first << ", " << second << ", " << third << "." << endl;

    return 0;
}

