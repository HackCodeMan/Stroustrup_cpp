#include <iostream>
#include <windows.h>
using namespace std;


void exit_programm()
{
    char str {0};
    while (str != '|')
    {
        cin >> str;
    }
}

int main(int argc, char const *argv[])
{
    SetConsoleCP(CP_UTF8);
    SetConsoleOutputCP(CP_UTF8);
    int num {0}, num1 {0};
    cin >> num;
    cin >> num1;
    if (num < num1)
    { 
        cout << "Наименьшее число равно: " << num << endl
        << "Найбольшее число равно: " << num1 << endl;
    }else{
        cout << "Наименьшее число равно: " << num1 << endl
        << "Найбольшее число равно: " << num << endl;
    }
    cout << num << endl;
    exit_programm();
    return 0;
}