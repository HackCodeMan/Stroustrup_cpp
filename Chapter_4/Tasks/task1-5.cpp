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
        double num1 {0}, num2 {0};
        cin >> num1;
        cin >> num2;
        if (num1 > num2) 
        {
            cout << "Наибольшее значение равно: " << num1 << endl;
            cout << "Наименьшее значение равно: " << num2 << endl;
        }
        else if (num1 < num2) 
        {
            cout << "Наибольшее значение равно: " << num2 << endl;
            cout << "Наименьшее значение равно: " << num1 << endl;
        }
        else if (num1 == num2){ cout << "Значения равны\n";}
        cin >> is_end;
    }
    return 0;
}
