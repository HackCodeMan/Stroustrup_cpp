#include <iostream>
#include <windows.h>
int main(int argc, char const *argv[])
{
    SetConsoleCP(CP_UTF8);
    SetConsoleOutputCP(CP_UTF8);
    using namespace std;
    char endgame;
    while(endgame != '|')
    {
        double num;
        double max = -999999999, min = 999999999;
        for (int i = 0; i < 2; i++)
        {
            cin >> num;
            if (num > max) max = num;
            if (num < min) min = num;
        }

            cout << "Наименьшее число равно: " << min << endl
            << "Наибольшее число равно: " << max << endl;
        
        if (min == max)
        {
            cout << "Числа равны\n";
        }
        if (abs(max - min) < 1.0/100)
        {
            cout << "Числа почти равны\n";
        }

        cin >> endgame;
    }
    
    return 0;
}
