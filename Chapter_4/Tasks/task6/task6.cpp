#include <iostream>
#include <windows.h>
int main(int argc, char const *argv[])
{
    SetConsoleCP(CP_UTF8);
    SetConsoleOutputCP(CP_UTF8);
    using namespace std;
    double num;
    double min{99999999};
    double max{-99999999};
    for(int i = 0; i < 2; i++)
    {
        cin >> num;
        if (num < min) min = num;
        if (num > max) max = num;
    }
   cout << "Меньший из введенных " << min  << endl
   << "Большый из введенных " << max << endl;
    return 0;
}
