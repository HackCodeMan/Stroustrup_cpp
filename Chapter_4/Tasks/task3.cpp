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
        int num1, num2;
        cin >> num1 >> num2;
        if (num1 < num2)
        {
            cout << "Наименьшее число  равно: " << num1 << endl
            << "Наибольшее число равно: " << num2 << endl;
        }
        else if (num2 < num1)
        {
            cout << "Наименьшее число  равно: " << num2 << endl
            << "Наибольшее число равно: " << num1 << endl;
        }
        else if (num1 == num2)
        {
            cout << "Числа равны\n";
        }
        
        cin >> endgame;
    }
    
    return 0;
}
