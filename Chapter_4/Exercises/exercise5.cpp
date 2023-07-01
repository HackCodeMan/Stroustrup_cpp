#include <iostream>
#include <cmath>
#include <windows.h>

int main(int argc, char const *argv[])
{
    SetConsoleCP(CP_UTF8);
    SetConsoleOutputCP(CP_UTF8);
    using namespace std;
    double num1, num2;
    char math_operation;
    cout << "Введите числовой пример. Например, num1 + num2 (+*^/-)\nВаш пример: ";
    cin >> num1 >> math_operation >> num2;
    double answer;
    switch(math_operation)
    {
        case '+':
            answer = num1 + num2;
            break;
        case '-':
            answer = num1 - num2;
            break;
        case '*':
            answer = num1 * num2;
            break;    
        case '/':
            answer = num1 * num2;
            break;  
        case '^':
            answer = pow(num1, num2);
            break;
        default:
            cerr << "Error: " << "Что то не правильно(\n";
            exit(1);
            break;
    }
    cout << "Ответ: " << answer << endl;
    return 0;
}


