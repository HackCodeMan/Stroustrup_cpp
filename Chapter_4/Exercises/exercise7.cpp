#include <iostream>
#include <cmath>
#include <vector>
#include <windows.h>

int convert_str_int(std::string str_num)
{
    using namespace std;
    int result;
    const vector < pair <int, string> > range0_9 {{0, "zero"},{1, "one"},{2, "two"},{3, "three"},
    {4, "four"},{5, "five"},{6, "six"},{7, "seven"},{8, "eight"},{9, "nine"}};
    for(pair <int, string> i : range0_9)
    {
        if (str_num == i.second)
        {
            result = i.first;
        }
    }
    return result;
}

int main(int argc, char const *argv[])
{
    SetConsoleCP(CP_UTF8);
    SetConsoleOutputCP(CP_UTF8);
    using namespace std;
    string val, val1;
    char math_operation;
    cout << "Введите числовой пример. Например, num1 + num2 (+*^/-)\nВаш пример: ";
    cin >> val >> math_operation >> val1;
    double num = convert_str_int(val), num1 = convert_str_int(val1);
    double answer;
    switch(math_operation)
    {
        case '+':
            answer = num + num1;
            break;
        case '-':
            answer = num - num1;
            break;
        case '*':
            answer = num * num1;
            break;    
        case '/':
            answer = num * num1;
            break;  
        case '^':
            answer = pow(num, num1);
            break;
        default:
            cerr << "Error: " << "Что то не правильно(\n";
            exit(1);
            break;
    }
    cout << "Ответ: " << answer << endl;
    return 0;
}