#include <iostream>
#include <windows.h>

int main(int argc, char const *argv[])
{
    SetConsoleCP(CP_UTF8);
    SetConsoleOutputCP(CP_UTF8);
    using namespace std;
    int attempts = 0, quessed_num;
    pair < int, int > range = {1, 100};
    char user_answer;

    
    bool is_win = false;
    while (! is_win)
    {
        cout << "Попытка №" << attempts << endl;
        if (range.first == range.second - 1)
        {
            cout << "Загаданное число: " << range.second; 
            is_win = true;
            continue;
        }
        quessed_num = (range.first + range.second)/2.0;
        cout << "Загаданное число больше " << quessed_num << " ?(y/n):\nОтвет: ";
        cin >> user_answer;
        
        if (user_answer == 'y') range.first = quessed_num;
        else if (user_answer == 'n') range.second = quessed_num;
        attempts++;
    }
    return 0;
}
