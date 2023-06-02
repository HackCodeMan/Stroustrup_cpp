#include <iostream>
#include <windows.h>
using namespace std;


int main(int argc, char const *argv[])
{
    SetConsoleCP(CP_UTF8);
    SetConsoleOutputCP(CP_UTF8);
    string is_end = "";

    while (is_end != "|")
    {
        int i {0};
        double maxim{-2147483648};
        double minim{2147483648};
        
        while (i != 10)
        {
            double num;
            string unit;
            cin >> num >> unit;
            
            if (num > maxim)
            {
                maxim = num;
                cout << "Наибольшее среди введенных: " << maxim << endl;
            }
            
            if (num < minim)
            {
                minim = num;
                cout << "Наименьшее среди введенных: " << minim << endl;
            }
            i++;
        }
    }
    return 0;
}
